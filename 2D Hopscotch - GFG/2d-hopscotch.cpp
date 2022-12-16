//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool f(vector<vector<int>> &v, int r, int c) {
        if(r < 0 || c < 0 || r >= v.size() || c >= v[0].size()) {
            return 0;
        }
        return 1;
    }

    int hopscotch(int i, int j, vector<vector<int>> mat, int ty, int n, int m)
    {
        long long ans = 0;
        
        if(m%2 == 0 && ty == 0) {
            if(f(mat, n-1, m)) ans += mat[n-1][m];
            if(f(mat, n-1, m+1)) ans += mat[n-1][m+1];
            if(f(mat, n, m+1)) ans += mat[n][m+1];
            if(f(mat, n+1, m)) ans += mat[n+1][m];
            if(f(mat, n, m-1)) ans += mat[n][m-1];
            if(f(mat, n-1, m-1)) ans += mat[n-1][m-1];
            return ans;
        }
        
        if(m%2 == 1 && ty == 0) {
            if(f(mat, n-1, m)) ans += mat[n-1][m];
            if(f(mat, n, m+1)) ans += mat[n][m+1];
            if(f(mat, n+1, m+1)) ans += mat[n+1][m+1];
            if(f(mat, n+1, m)) ans += mat[n+1][m];
            if(f(mat, n+1, m-1)) ans += mat[n+1][m-1];
            if(f(mat, n, m-1)) ans += mat[n][m-1];
            
            return ans;
        }
        
        
        if(m%2 == 0 && ty == 1) {
            if(f(mat, n-2, m)) ans += mat[n-2][m];
            if(f(mat, n-2, m+1)) ans += mat[n-2][m+1];
            if(f(mat, n-1, m+2)) ans += mat[n-1][m+2];
            if(f(mat, n, m+2)) ans += mat[n][m+2];
            if(f(mat, n+1, m+2)) ans += mat[n+1][m+2];
            if(f(mat, n+1, m+1)) ans += mat[n+1][m+1];
            if(f(mat, n+2, m)) ans += mat[n+2][m];
            if(f(mat, n+1, m-1)) ans += mat[n+1][m-1];
            if(f(mat, n+1, m-2)) ans += mat[n+1][m-2];
            if(f(mat, n, m-2)) ans += mat[n][m-2];
            if(f(mat, n-1, m-2)) ans += mat[n-1][m-2];
            if(f(mat, n-2, m-1)) ans += mat[n-2][m-1];
            
            
            return ans;
        }
        
        
        if(m%2 == 1 && ty == 1) {
            if(f(mat, n-2, m)) ans += mat[n-2][m];
            if(f(mat, n-1, m+1)) ans += mat[n-1][m+1];
            if(f(mat, n-1, m+2)) ans += mat[n-1][m+2];
            if(f(mat, n, m+2)) ans += mat[n][m+2];
            if(f(mat, n+1, m+2)) ans += mat[n+1][m+2];
            if(f(mat, n+2, m+1)) ans += mat[n+2][m+1];
            if(f(mat, n+2, m)) ans += mat[n+2][m];
            if(f(mat, n+2, m-1)) ans += mat[n+2][m-1];
            if(f(mat, n+1, m-2)) ans += mat[n+1][m-2];
            if(f(mat, n, m-2)) ans += mat[n][m-2];
            if(f(mat, n-1, m-2)) ans += mat[n-1][m-2];
            if(f(mat, n-1, m-1)) ans += mat[n-1][m-1];
            
            return ans;
        }
        
        return 0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, ty, i, j;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++)
                cin>>mat[i][j];
        cin>>ty>>i>>j;
        
        Solution ob;
        cout<<ob.hopscotch(n, m, mat, ty, i, j)<<"\n";
    }
    return 0;
}
// } Driver Code Ends