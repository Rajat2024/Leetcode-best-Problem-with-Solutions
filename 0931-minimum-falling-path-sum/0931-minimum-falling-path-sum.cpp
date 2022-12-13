class Solution {
    int dp[101][101];
    int rec(vector<vector<int>>&matrix,int i,int j)
    {
        if(i==matrix.size()-1 && j>=0 && j<matrix.size())
            return dp[i][j]=matrix[i][j];
        if(i<0||i>=matrix.size()||j<0||j>=matrix[0].size())
            return 10000;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int a=matrix[i][j]+rec(matrix,i+1,j-1);
        int b=matrix[i][j]+rec(matrix,i+1,j);
        int c=matrix[i][j]+rec(matrix,i+1,j+1);
        return dp[i][j]=min({a,b,c});

        
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans=INT_MAX;
        for(int j=0;j<matrix[0].size();j++){
                    memset(dp,-1,sizeof(dp));
             ans=min(rec(matrix,0,j),ans);}
        return ans;
    }
};