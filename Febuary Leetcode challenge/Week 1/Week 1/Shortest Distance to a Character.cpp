class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.length();
        vector<int> res(n,INT_MAX);
        int pos = -1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == c)
                pos = i;
            if(pos!=-1){
            res[i]=(i - pos);
            }
        }
        pos=-1;
        for (int i = n-1; i >= 0; i--) {
            if (s[i] == c)
                pos = i;
            if(pos!=-1){
            res[i] = min(res[i], pos - i);
            }
        }
        return res;
    }
};
//phle left se min daal di fir right se dono mai se min daal di.
