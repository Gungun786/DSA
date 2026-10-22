class Solution {
public:
void dfs(int node,vector<vector<int>>&adj,vector<bool>&visited){
 visited[node]=true;
  for (int neighbour = 0; neighbour < adj.size(); neighbour++) {
        if (adj[node][neighbour]==1&&!visited[neighbour]) {
            dfs(neighbour, adj, visited);
        }
}
}
    int findCircleNum(vector<vector<int>>& isConnected) {

        int n=isConnected.size();
        vector<bool>visited(n,false);
        int count=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,isConnected,visited);
                count++;
            }

        }
        return count;
    }
};