class Solution {
public:
     int mod = 1e9+7;
     int dp[301][301];
    
     int f(int n, int num, int x ) 
     {
            if(n < 0 ) return 0;  // if number n becomes -ve
            
            if(n == 0) return 1; // we ave found number
         
            if(pow(num , x) > n) return 0; // we will never get the number n
         
            if(dp[n][num] != -1) return dp[n][num]; // memo
          
            int temp = pow(num , x) ;
            
            int pick = f(n- temp , num + 1 , x)%mod; 
            int skip = f(n , num + 1 , x)%mod;
            
            return dp[n][num] =  (skip  + pick ) % mod ;
    }
    
    
    int numberOfWays(int n, int x) {
        memset(dp, -1, sizeof(dp));
        return f(n, 1, x);
    }

};