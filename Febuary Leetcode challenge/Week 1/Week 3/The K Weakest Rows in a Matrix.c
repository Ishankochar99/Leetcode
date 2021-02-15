class Solution {
public:
    static bool check(pair<int,int>&p1,pair<int,int>&p2)
    {
        if(p1.first==p2.first)
            return p1.second<p2.second;
        else
            return p1.first<p2.first;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>ans;
        pair<int,int>p1;
        vector<pair<int,int>>v;
        int n=mat.size();
        int m=mat[0].size(),h=0,sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            if(mat[i][j]==1){
                sum++;
            }
        }
            p1=make_pair(sum,h);
            v.push_back(p1);
            sum=0;
            h++;
    }
     sort(v.begin(),v.end(),check);
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
