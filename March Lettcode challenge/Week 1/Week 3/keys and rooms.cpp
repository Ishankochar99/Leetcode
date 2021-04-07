class Solution {
public:
    vector<bool> vis;

    void dfs(vector<vector<int>>& rooms,int i){
        for(int j:rooms[i]){
            if(!vis[j]){
                vis[j]=true;
                dfs(rooms,j);
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vis=vector<bool>(n,false);
        vis[0]=true;
        dfs(rooms,0);
        for(int i=0;i<n;i++)
            if(vis[i]==false)return false;
        return true;
    }
};
