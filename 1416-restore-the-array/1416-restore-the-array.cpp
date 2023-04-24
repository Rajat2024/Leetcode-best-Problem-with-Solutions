class Solution {
public:
    int numberOfArrays(string s, int k) {
            vector<int> dp(s.size(), -1); 
        return rec(s,k,0,dp);
    }
        int rec(string &s,int k,int i,vector<int>&dp)
        {
                if(s.size()==i)
                        return 1;
                if(s[i]=='0')
                        return 0;
                if(dp[i]!=-1)
                        return dp[i];
                int ans=0;
                long num=0;
                for(int j=i;j<s.size();j++)
                {
                        num=num*10+s[j]-'0';
                        if(num>k)
                                break;
                        ans+=rec(s,k,j+1,dp);
                        ans%=1000000000+7;
                }
                return dp[i]=ans;
        }
};