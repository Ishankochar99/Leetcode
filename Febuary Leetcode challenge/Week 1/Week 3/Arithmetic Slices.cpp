class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int n=A.size();
        if(n<3){
            return 0;
        }
        vector<int>v(n,0);
        if (A[2]-A[1] == A[1]-A[0]){
            v[2] = 1;
        }
        int result = v[2];
        for(int i=3;i<n;i++){
            if(A[i]-A[i-1]==A[i-1]-A[i-2]){
                v[i]=v[i-1]+1;
            }
            result+=v[i];
        }
        return result;
    }
};
