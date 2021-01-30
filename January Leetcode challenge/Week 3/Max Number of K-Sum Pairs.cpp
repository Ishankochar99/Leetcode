class Solution {
public:
   int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> myhash;
        int result = 0;

        for (int num : nums) {
            int target = k - num;

            if (myhash[target] > 0) {
                result++;
                myhash[target]--;
            } else
                myhash[num]++;
        }

        return result;
    }
};
