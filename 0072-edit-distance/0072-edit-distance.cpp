class Solution {
public:
        int ans[502][502];
        int dp(string s1,string s2,int n,int m)
        {
                if(ans[n][m]!=-1)
                        return ans[n][m];
            
                if(n==0)
                        return ans[n][m]=m;
                if(m==0)  
                        return ans[n][m]=n;
            
                if(s1[n-1]==s2[m-1])
                 return ans[n][m]=dp(s1,s2,n-1,m-1);
                else
                 return  ans[n][m]= 1+min({dp(s1,s2,n-1,m),dp(s1,s2,n,m-1),dp(s1,s2,n-1,m-1)});
            
        }
    int minDistance(string s1, string s2) {
            memset(ans,-1,sizeof(ans));
       return dp(s1,s2,s1.length(),s2.length());
            
    }
};