class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;++i)
            sum += nums[i];

        if(sum%2 == 1)
            return false;

        bool dp[n][sum/2+1];

        for(int i=0;i<n;++i)
        for(int j=0;j<=sum/2;++j)
        {
            if(i==0)    //Base Case
                dp[i][j] = false;
            else if(j==0)
                dp[i][j]=true;
            else if(nums[i-1] > j)    //SkIP case
                dp[i][j] = dp[i-1][j];
            else if(nums[i-1]==j)
                dp[i][j] = true;
            else
                dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
        }
        return dp[n-1][sum/2];
    }
};
