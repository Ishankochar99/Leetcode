//dry run, smz aajaega
class Solution {
public:

string removeDuplicateLetters(string s) {

    string str="";

    unordered_map<char,int> mp;
    vector<bool> visited(26,false);

    //count frequency of each character
    for(auto ch:s)
        mp[ch]++;

    for(auto c:s)
    {
        mp[c]--;

        //means we have not visited the current character before
        if(visited[c-'a']==false)
        {
            //if the last character at string is lexographically greater and
            //its count is still there so that it can be adjusted later on in iteration
            //we remove it
            while(str.length()>0 and c<str.back() and mp[str.back()]>0)
            {
                visited[str.back()-'a']=false;
                str.pop_back();
            }
            //after we are done with removing elements from last
             //push the current element and set visited to true
        str.push_back(c);
        visited[c-'a']=true;
        }

    }

    return str;
}
};
