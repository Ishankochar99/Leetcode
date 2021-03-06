Nclass Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int z=INT_MAX,flag=0,k=INT_MAX,index=INT_MAX;
        for(int i=0;i<points.size();i++){
            int sum=0;
            if(points[i][0]==x || points[i][1]==y){
                sum=(abs(points[i][0]-x)+abs(points[i][1]-y));
                flag=1;
                z=min(z,sum);
                if(z<k){
                    index=i;
                }else if(z==k){
                    index=min(index,i);
                }
                k=z;
            }
        }
       if(flag==0){
           return -1;
       }else{
        return index;
       }
    }
};
