class Solution {
public:
 void dfs(vector<vector<char>>&grid,int i,int j){
    int m=grid.size();
    int n=grid[0].size();
    if(i<0||j<0||i>=m||j>=n||grid[i][j]=='0'){
        return;
    }
    grid[i][j]='0';
    dfs(grid, i - 1, j); // Up
     dfs(grid, i + 1, j); // Down
     dfs(grid, i, j - 1); // Left
        dfs(grid, i, j + 1); // Right
 }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }
};