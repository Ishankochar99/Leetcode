class Solution {
public:
    int solve(vector<vector<int>>& grid,int i,int j){
        if(i>=grid.size() || i<0 || j<0 || j>=grid[0].size() || grid[i][j]==0){
            return 0;
        }
        grid[i][j]=0;
        int temp=1+solve(grid,i+1,j)+solve(grid,i-1,j)+solve(grid,i,j-1)+solve(grid,i,j+1);
        return temp;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int maxArea=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                maxArea=max(maxArea,solve(grid,i,j));
                }
            }
        }
        return maxArea;
    }
};
