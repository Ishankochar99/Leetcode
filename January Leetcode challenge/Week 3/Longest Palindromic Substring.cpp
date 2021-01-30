class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==0){
            return "";
        }
        int max_len = 1;
        int start = 0;
        int n=s.length();
        int arr[n][n];
       for(int g=0;g<n;g++){
           for(int i=0,j=g;j<n;j++,i++){
               int currentLength=g+1;
               if(g==0){
                   arr[i][j]=1;
               }else if(g==1){
                   if(s[i]==s[j]){
                       arr[i][j]=1;
                   }else{
                       arr[i][j]=0;
                   }
               }else{
                   if(s[i]==s[j] && arr[i+1][j-1]==1){
                       arr[i][j]=1;
                   }else{
                        arr[i][j]=0;
                   }
               }
               if(arr[i][j] == 1 && currentLength > max_len)
                    max_len = currentLength, start = i;
           }
       }
          return s.substr(start, max_len);
    }
};
