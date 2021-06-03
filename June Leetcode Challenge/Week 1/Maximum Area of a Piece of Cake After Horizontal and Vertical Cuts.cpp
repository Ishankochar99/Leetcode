class Solution {
public:
    int maxArea(int h, int w, vector<int>& hori, vector<int>& veri) {
        sort(hori.begin(),hori.end());
        sort(veri.begin(),veri.end());
        long n=hori.size(),m=veri.size(),y=0,z=0;
        long max_h=max(h-hori[n-1],hori[0]-0),max_w=max(w-veri[m-1],veri[0]-0);
        for(int i=n-1;i>0;i--){
            y=hori[i]-hori[i-1];
            if(y>max_h){
                max_h=y;
            }
        }
        for(int i=m-1;i>0;i--){
            z=veri[i]-veri[i-1];
            if(z>max_w){
                max_w=z;
            }
        }
        return (max_h*max_w)%1000000007;
    }
};
