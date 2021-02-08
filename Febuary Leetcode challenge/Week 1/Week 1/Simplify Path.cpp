class Solution {
public:
    string simplifyPath(string path) {
        stack<string>s;
        int n=path.length();
        if(path[n-1]!='/'){
            path+='/';
            n++;
        }
         string temp="";
        string ans="";
        int i=1;
        while(i<n){
            if(path[i]=='/'){
                if( temp=="" || temp=="." ){

                }else if(temp==".."){
                    if(!s.empty()) s.pop();
                }else{
                    s.push(temp);
                }
                temp="";
            }else{
                temp+=path[i];
            }
            i++;
        }
        while(!s.empty()){
            ans="/"+s.top()+ans;
            s.pop();
        }

        if(ans.length()==0)
            ans="/";

        return ans;
    }
};
