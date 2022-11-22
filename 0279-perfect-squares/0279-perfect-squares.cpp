class Solution {
   int mp[101][10002];
    int rec(vector<int>& coins,int i,int amount)
    {
        if(amount==0)
            return 1;
        if(i>=coins.size())
            return INT_MAX-1;
        if(amount<=0)
            return INT_MAX-1;
        if(mp[i][amount]!=-1)
            return mp[i][amount];
        if(amount>=coins[i])
        {
            return mp[i][amount]=min(1+rec(coins,i,amount-coins[i]),rec(coins,i+1,amount));
        }
        else
        {
            return mp[i][amount]=rec(coins,i+1,amount);
        }
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(mp,-1,sizeof(mp));
        int n=rec(coins,0,amount);
        if(n==INT_MAX-1)
            return -1;
        else
            return n-1;
    }
public:
    int numSquares(int n) {
         // len=sqrt(n)+1;
        vector<int>arr;
        for(int i=1;i<=sqrt(n);i++)
        arr.push_back(i*i);
    
        return coinChange(arr,n);
    }
};