class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       unordered_map<int,int>mp1;
        vector<int>res;
        int index=0,index2=0;
        for(int i=1;i<=nums.size();i++){
            mp1[i]++;
        }
        for(int i=0;i<nums.size();i++){
            mp1[nums[i]]++;
        }
        for(auto i:mp1){
            if(i.second==3){
                 res.push_back(i.first);
            }
        }
        for(auto i:mp1){
            if(i.second==1){
                 res.push_back(i.first);
            }
        }
        return res;
    }
};
