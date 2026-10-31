class Solution {
public:
 void dfs(int src,int sc,vector<vector<int>>& image,vector<vector<int>>&ans,int delr[],int delc[],int color){
    int incolor=image[src][sc];
    ans[src][sc]=color;
    for(int i=0;i<4;i++){
        int nrow=delr[i]+src;
        int ncol=delc[i]+sc;
         if(nrow >= 0 && nrow < image.size() &&
               ncol >= 0 && ncol < image[0].size() &&
               image[nrow][ncol] == incolor &&
               ans[nrow][ncol] != color) {

                dfs(nrow, ncol, image, ans,
                    delr, delc, color);
            }
    }
 }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int incolor=image[sr][sc];
        vector<vector<int>>ans=image;
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        dfs(sr,sc,image,ans,delr,delc,color);
        return ans;

        
    }
};