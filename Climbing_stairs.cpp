class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        for (int i = 0; i < nums.size()-1 && res.size() < 2;)
        {
            if (nums[i] != nums[i+1])
            {
                res.push_back(nums[i++]);
            }
            else
            {
                i+=2;
            }
        }
        if (res.size() < 2) res.push_back(nums.back());
            return res;
    }
};
