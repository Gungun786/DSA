class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination){
            return true;
        }
       vector<vector<int>>adj(n);

       for(auto &edge:edges){
        int u=edge[0];
        int v=edge[1];

        adj[u].push_back(v);
        adj[v].push_back(u);
       }
      vector<int>visited(n,false);
        queue<int>q;
         visited.push_back(source);
         q.push(source);
         while(!q.empty()){
            int u=q.front();
            q.pop();
            for(int v:adj[u]){
                if(visited[v]==false){
                        visited[v]=true;
                        q.push(v);
                }

            }
            
         }
         if(visited[destination]==true){
            return true;
         }
         return false;

    }
};