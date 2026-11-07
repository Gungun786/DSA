class Solution {
public:
 
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        int n=numCourses;
        vector<int>indegree(n,0);
        for(auto &p:prerequisites){
              int a=p[0];
              int b=p[1];
              adj[b].push_back(a);
              indegree[a]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int>ans;
        while(!q.empty()){
            int p=q.front();
            ans.push_back(p);
            q.pop();
            for(int neighbour:adj[p]){
                indegree[neighbour]--;

                if(indegree[neighbour] == 0) {
                    q.push(neighbour);
                }
            }
        }
        if(ans.size() == numCourses) {
            return ans;
        }

        return {};

        
    }
};