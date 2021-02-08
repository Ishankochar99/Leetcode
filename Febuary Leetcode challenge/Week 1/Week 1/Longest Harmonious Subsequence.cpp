class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>v;
        for( auto i : nums ){
            ++ v[i] ;
        }
        int ans = 0 ;
        for(auto i : nums ){
            if(v[i+1]){
                ans = max( ans ,   v[i] + v[i+1] ) ;
            }
        }
        return ans ;
    }
};
