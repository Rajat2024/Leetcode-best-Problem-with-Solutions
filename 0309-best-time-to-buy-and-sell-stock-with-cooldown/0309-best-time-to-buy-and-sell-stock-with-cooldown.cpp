class Solution {
    int dp[5001][2];
public:
  int  rec(vector<int> pr,int i,bool bos)
    {
        if(i>=pr.size())
            return 0;
      
        if(dp[i][bos]!=-1)
          return dp[i][bos];
      
        int profit=0;
      
        if(bos==1)//buy
            return dp[i][bos]= profit=max(+rec(pr,i+1,0)-pr[i],rec(pr,i+1,1));
        else     
           return dp[i][bos]=profit=max(rec(pr,i+2,1)+pr[i],rec(pr,i+1,0));

    
              
    }
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return rec(prices,0,1);
    }
};