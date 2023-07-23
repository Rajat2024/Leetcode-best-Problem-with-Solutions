const long long mod = 1000000007;
long long power_with_modulo(long long x, long long y)
{
    // a^b when a and b are long long with modules with TC -> O(log(n))
    long long res = 1;
    x = x % mod;
    if (x == 0)
    {
        return 0;
    }
    while (y > 0)
    {
        if (y & 1)
        {
            res = (res * x) % mod;
        }
        y = y >> 1;
        x = (x * x) % mod;
    }
    return res % mod;
}
long long numSubseq(vector<long long>& arr, int k) {
        int n = arr.size();
    vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, 0));

    // Initialization
    dp[0][0] = 1;

    // Filling the dp array
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= k; ++j) {
            dp[i][j] = dp[i - 1][j];
            if (j >= arr[i - 1]) 
            {
                dp[i][j] += dp[i - 1][j - arr[i - 1]]%mod ;
            }
        }
    }

    return dp[n][k]%mod;
    }
class Solution {
public:
    int numberOfWays(int n, int x) {
        vector<long long>dp(n);
          for(int i=1;i<=n;i++)
          {
              dp[i-1]=power_with_modulo(i,x)%mod;
          }
        return numSubseq(dp,n)%mod;
    }
};