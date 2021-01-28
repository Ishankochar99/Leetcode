class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>s;
        bool isPresent=false;
        int n=wordList.size();
        for(int i=0;i<n;i++){
            if(wordList[i]==endWord){
                isPresent=true;
            }
            s.insert(wordList[i]);
        }
      if(isPresent==false){
          return 0;
      }
        queue<string>q;
        q.push(beginWord);
        int d=0;
        while(!q.empty()){
        int d=d+1,l=q.size();
        while(l--){
            string top=q.front();
            q.pop();
            for(int i=0;i<top.length();i++){
                string temp=top;
                for(char c='a';c<='z';c++){
                    temp[i]=c;
                    if(top.compare(temp)==0){
                        continue;
                    }
                    if(temp.compare(endWord)==0){
                        return d;
                    }
                    if(s.find(temp)!=s.end()){
                        q.push(temp);
                        s.erase(temp);
                    }
                }
            }
        }
        }
        return d;
    }
};
