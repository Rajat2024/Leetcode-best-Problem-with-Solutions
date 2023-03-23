class Solution {
    int bfsOfGraph(int V, vector<int> adj[])
{
    // vector<int> bfs_traversal;
        int ans=0;
    vector<bool> vis(V, false);
    for (int i = 0; i < V; ++i) 
    {
        if (!vis[i]) 
        {
            queue<int> q;
            vis[i] = true;
            q.push(i);
            ans++;
            while (!q.empty()) {
                int g_node = q.front();
                q.pop();
                // bfs_traversal.push_back(g_node);
                for (auto it : adj[g_node]) {
                    if (!vis[it]) {
                        vis[it] = true;
                        q.push(it);
                    }
                }
            }
        }
    }
    return ans;
}
public:
    int makeConnected(int n, vector<vector<int>>& con) {
        vector<int>adj[n];
            if(con.size()<n-1)
                    return -1;
        for(int i=0;i<con.size();i++)
        {
                adj[con[i][1]].push_back(con[i][0]);
                adj[con[i][0]].push_back(con[i][1]);

        }
      
            return bfsOfGraph(n,adj)-1;
        // cout<<ans;
            // if(bfsOfGraph(n,adj))
        // return n1;
            return 0;
    }
};