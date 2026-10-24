class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        if(n==0||grid[0][0]==1||grid[n-1][n-1]==1)
        return-1;
        if(n==1){
            return 1;
        }
        //bfs
        
        queue<pair<pair<int,int>,int>>q;
        q.push({{0,0},1});
        grid[0][0]=1;
        
        int drow[]={-1,-1,0,1,1,1,0,-1};
        int dcol[]={0,-1,-1,-1,0,1,1,1};
        
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int d=q.front().second;
            q.pop();
             
             if(r==n-1&&c==n-1){
                return d;
             }
             for(int i=0;i<8;i++){
                int nrow=r+drow[i];
                int ncol=c+dcol[i];

                if(nrow>=0&&ncol>=0&&nrow<n&&ncol<n&&grid[nrow][ncol]==0){
                    grid[nrow][ncol]=1;
                    q.push({{nrow,ncol},d+1});
                }
             }


        }
        return-1;



    }
};