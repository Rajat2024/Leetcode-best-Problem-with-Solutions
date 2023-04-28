
// ["tars","rats","arts","star"]
// tars --> rats
// rats --> tars , arts
// arts --> rats
// star --> NULL
class Solution {
public:
    void bfs(vector<vector<int>>&adj, vector<bool>&visited, int startNode)
    {
        queue<int>q;
        q.push(startNode);
        visited[startNode] = true;
        while(!q.empty())
        {
            int currNode = q.front();
            q.pop();
            
            for (int adjNode : adj[currNode])
            {
                if (visited[adjNode]) continue;
                visited[adjNode] = true;
                q.push(adjNode);
            }
        }
    }
    int getComponentCount(vector<vector<int>>&adj)
    {
        int n = adj.size(), components = 0;
        vector<bool>visited(n, false);
        for (int i = 0; i < n; i++)
        {
            if (visited[i]) continue;
            bfs(adj, visited, i);
            components++;
        }
        return components;
    }
    bool isSimilar(string& s1, string& s2)
    {
        int different = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] != s2[i]) different++;
        }
        return (different == 0 || different == 2);
    }
    int numSimilarGroups(vector<string>& strs) 
    {
        int n = strs.size();
        vector<vector<int>>adj(n);
        //==================================================================
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (isSimilar(strs[i], strs[j]))
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        //=========================================================================
        int componentCount = getComponentCount(adj);
        return componentCount;
    }
};