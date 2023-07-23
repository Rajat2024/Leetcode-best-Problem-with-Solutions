class Solution {
public:
    long long dp[100000+1][2];
    long long rec(vector<int>&nums,int x,int i,bool l)
    {
        if(i>=nums.size())
            return 0;
        //main
        if(dp[i][l]!=-1)
            return dp[i][l];
        long long take=0;
        if(l == nums[i]%2)
         take=rec(nums,x,i+1,l)+nums[i];
        else
         take=rec(nums,x,i+1,!l)+nums[i]-x;
        long long not_take=rec(nums,x,i+1,l);
        return dp[i][l]=max(take,not_take);
    }
    long long maxScore(vector<int>& nums, int x) {
       memset(dp,-1,sizeof(dp));
       if(nums[0]%2)
       return rec(nums,x,0,1);
        else
       return rec(nums,x,0,0);
    }
};