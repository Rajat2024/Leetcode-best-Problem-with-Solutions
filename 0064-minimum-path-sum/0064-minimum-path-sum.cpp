class Solution {
public:
    int dp[201][201];
    int rec(int i,int j,vector<vector<int>>&grid)
    {
        if(i==grid.size()-1&&j==grid[0].size()-1)
            return dp[i][j]=grid[i][j];
        
        if(i>=grid.size()||j>=grid[0].size())
            return dp[i][j]=INT_MAX;
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        return dp[i][j]=grid[i][j]+min(rec(i+1,j,grid),rec(i,j+1,grid));
    }
    int minPathSum(vector<vector<int>>& grid)
    {
        memset(dp,-1,sizeof(dp));
        return rec(0,0,grid);
    }
};