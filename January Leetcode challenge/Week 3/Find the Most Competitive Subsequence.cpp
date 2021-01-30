class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        stack<int>s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            while(!s.empty() && nums[i]<s.top() && n-i+s.size()>k){
                s.pop();
            }
            if(s.size()<k){
            s.push(nums[i]);
            }
        }
       vector<int> ans(k);
        for (int i = ans.size()-1; i >= 0; --i) {
            ans[i] = s.top();
            s.pop();
        }

        return ans;
    }
};
