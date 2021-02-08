class Solution {
public:

    int minimumDeviation(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]%2==0?nums[i]:nums[i]*2);//insert even directly and odd with one time multiplication and it will become even.
        }
        int diff=*s.rbegin()-*s.begin();
        while(*s.rbegin()%2==0){//run the loop untill difference is minimized
            int x=*s.rbegin();
            s.erase(x);
            s.insert(x/2);
            diff = min(diff,*s.rbegin()-*s.begin());
        }
        return diff;

    }
};