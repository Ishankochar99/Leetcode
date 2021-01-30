class Solution {
public:
    int getMaximumGenerated(int n) {
         if(n == 0) return 0;
        vector<int> arr(n+1, 0);
        arr[0]=0;
        arr[1]=1;
        for(int i=1;i<=n/2;i++){
              if(i*2 > n || (2*i + 1) > n)
                break;
            arr[2*i]=arr[i];
             arr[(2*i)+1]=arr[i]+arr[i+1];
        }

        return *max_element(arr.begin(),arr.end());

    }
};
