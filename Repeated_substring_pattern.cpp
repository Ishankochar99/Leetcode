class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int l=1;l<=n/2;l++){
            int i=0,j=i+l;

            while(i<n && j<n && s[i]==s[j]){
                i++;j++;
            }
            if(j==n && n%l==0)
                return true;
        }return false;
    }
};
