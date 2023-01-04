//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
   
  public:
    int maximum_profit(int n, vector<vector<int>> &arr) {
       int n1 = 0;
        for (int i = 0; i < n; i++)
        {
            n1 = max({arr[i][0], n1, arr[i][1]});
        }
        int dp[100001] = {0};
        vector<pair<int, int>> adj[n1 + 1];
        for (int i = 0; i < n; i++)
        {
            int a = arr[i][0], b = arr[i][1], c = arr[i][2];
            adj[a].push_back({b, c});
        }
        for (int i = n1 - 1; i >= 0; i--)
        {
            dp[i] = dp[i + 1];
            for (auto it : adj[i])
            {
                dp[i] = max(dp[i],  it.second+dp[it.first]);
            }
        }
        return dp[0];
    }
    
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> intervals(n, vector<int>(3));
        for (int i = 0; i < n; i++) {
            cin >> intervals[i][0] >> intervals[i][1] >> intervals[i][2];
        }
        Solution obj;
        cout << obj.maximum_profit(n, intervals) << endl;
    }
    return 0;
}

// } Driver Code Ends