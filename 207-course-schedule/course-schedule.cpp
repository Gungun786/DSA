
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        // Step 1: Create adjacency list
        vector<vector<int>> adj(numCourses);

        // Step 2: Create indegree array
        vector<int> indegree(numCourses, 0);

        // Step 3: Build directed graph
        for(auto &p : prerequisites) {
            int a = p[0];
            int b = p[1];

            adj[b].push_back(a);
            indegree[a]++;
        }

        // Step 4: Create queue
        queue<int> q;

        // Step 5: Push nodes having indegree 0
        for(int i = 0; i < numCourses; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        // Step 6: BFS traversal
        int count = 0;

        while(!q.empty()) {

            int node = q.front();
            q.pop();

            count++;

            for(int neighbour : adj[node]) {

                indegree[neighbour]--;

                if(indegree[neighbour] == 0) {
                    q.push(neighbour);
                }
            }
        }

        // Step 7: Check if all courses are completed
        return count == numCourses;
    }
};
