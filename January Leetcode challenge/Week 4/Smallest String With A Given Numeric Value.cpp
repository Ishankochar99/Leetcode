class Solution {
public:
    string getSmallestString(int n, int k) {
        string s(n,'a');
        cout<<s<<endl;
        k=k-n;
        int i=n-1;
        while(k>0){
            int tmp=min(k,26);
            cout<<tmp<<endl;
            s[i]+=tmp;
            cout<<s[i]<<endl;
            k-=tmp;
            i--;
        }
        return s;
    }
};
