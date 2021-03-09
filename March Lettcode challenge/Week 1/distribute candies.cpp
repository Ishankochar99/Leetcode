class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>s;
        int n=candyType.size();
        for(int i=0;i<n;i++){
            s.insert(candyType[i]);
        }
        int t=n/2;
        if(s.size()>=t){
            return t;
        }else{
            return s.size();
        }
    }
};
