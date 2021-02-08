class Solution {
public:
    int hammingWeight(uint32_t n) {
        long long c=0;
        while(n!=0){
     long long rmst=n&-n;
        n=n-rmst;
        c++;
        }
        return c;
    }
};
