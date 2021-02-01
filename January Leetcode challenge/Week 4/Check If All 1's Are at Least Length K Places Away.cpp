class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
       int count = nums.size()+1;
        for(int n:nums)
        {
            if(n==1)
            {
                if(count<k) return false;
                count=0;
            }
            else
            {
                count++;
            }

        }
        return true;
    }
};
