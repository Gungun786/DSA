class Solution {
public:
int fun(int i,int j,vector<vector<int>>arr, vector<vector<int>>&dp){
    if(i>=0&&j>=0&&arr[i][j]==1){
        return 0;
    }
    if(i==0&&j==0)return 1;
    if(i<0||j<0)return 0;
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
     int up=fun(i,j-1,arr,dp);
     int down=fun(i-1,j,arr,dp);
     return dp[i][j]= up+down;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        //memoization
        int m = obstacleGrid.size();        // rows
        int n = obstacleGrid[0].size();    //column
        vector<vector<int>>dp(m,vector<int>(n,-1));
       
        return fun(m-1,n-1,obstacleGrid,dp);
        
    }
};