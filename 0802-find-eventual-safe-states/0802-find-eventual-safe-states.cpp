class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>indegree(n);
        vector<vector<int>>adj(n);
        
        vector<bool> safe(n);
        // vector<int> adj[n];
        // make adj list parent --> child
        for(int i=0;i<n;i++)
        {
            for(auto node : graph[i])
            {
                adj[node].push_back(i);
                indegree[i]++;
            }
        }
        
        queue<int>q;
        for(int i=0;i<n;i++)
            if(indegree[i]==0)
                q.push(i),safe[i]=1;
        
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for (auto& child : adj[node]) 
            {
                indegree[child]--;
                if (indegree[child] == 0) {
                    q.push(child),safe[child]=1;
                }
            }
            
        }
         vector<int> safeNodes;
        for(int i = 0; i < n; i++) {
            if(safe[i]) {
                safeNodes.push_back(i);
            }
        }
        return safeNodes;
    }
};