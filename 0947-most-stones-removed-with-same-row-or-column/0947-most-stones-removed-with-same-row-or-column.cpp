class Solution {
public:
    
    int solver(vector<int>adj[] ,vector<bool>&vis, int i){
        vis[i]=true ; 
        queue<int> q; 
        q.push(i); 
        int ans =1 ; 
        while(!q.empty()){
            int v = q.front();
            q.pop(); 
            for(int u : adj[v]){
                if(!vis[u]){
                    vis[u]=true ; 
                    ans ++; 
                    q.push(u);
                }

            }
            
        }
        return ans ;
    }
    int removeStones(vector<vector<int>>& v) {
        int n = v.size() ;
        vector<int>adj[n]; 
        
        for(int i =0 ; i< n ; i++){
            for(int j=i+1 ; j<n ; j++){
                if(v[i][0]==v[j][0] or v[i][1]==v[j][1]){
                    adj[i].push_back(j); 
                    adj[j].push_back(i); 
                }
            }
        }
        
        vector<bool>vis(n,false);
        int ans =0 ;
        for(int i =0 ; i< n ; i++){
            if(!vis[i]){
                // cout<<i<<" ";
                // cout<<solver(adj,vis,i);
                int t= solver(adj, vis , i); 
                cout<<t<<" ";
                if(t>0){
                    ans=ans+t; 
                    ans--;
                }
            }
        }
        return ans ; 
    }
};