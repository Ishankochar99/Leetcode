class Solution {
public:
    bool isAnagram(string s, string t) {
        set<int>s1,s2;
        unordered_map<char,int>mp1,mp2;
        for(int i=0;i<s.length();i++){
            s1.insert(s[i]);
            mp1[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            s2.insert(t[i]);
            mp2[t[i]]++;
        }
        return s1==s2 && mp1==mp2;
    }
};
