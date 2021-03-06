class Solution {
public:
    bool hasAllCodes(string s, int k) {
        map<string, int> mp;
        int n = s.length()-k;

        for(int i=0;i<=n;i++)
        {
            string t = s.substr(i,k);
            mp[t]++;
        }

        return (mp.size() == pow(2,k));
    }
};
