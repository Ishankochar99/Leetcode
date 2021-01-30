class Solution {
public:
    bool isValid(string s) {
        stack<char>set;
        int n=s.length();
        if(s.length()==1){
            return false;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' ){
                set.push(s[i]);
            }else{
                 if(s[i]==')' || s[i]=='}' || s[i]==']' ){
                     if(s[i]==')'){
                         s[i]='(';
                     }else if(s[i]=='}'){
                         s[i]='{';
                     }else{
                         s[i]='[';
                     }
                     if(set.size()==0){
                         return false;
                     }else{
                         if(set.top()==s[i]){
                             set.pop();
                         }else{
                             return false;
                         }
                     }
                 }
            }
        }
        if(set.size()>0){
            return false;
        }
        return true;
    }
};
