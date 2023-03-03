class Solution {
public:
    vector<vector<int>> dp;
    int rec(vector<int>& nums, int target,int i)
    {
        
        if(nums.size()==i)
        {
            return target==0;
        }
        if(dp[target+1000][i]!=-1)
        return dp[target+1000][i];
        int take=0;
            take=rec(nums,target-nums[i],i+1);
        
        int not_take=rec(nums,target+nums[i],i+1);
        return dp[target+1000][i]=take+not_take;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        dp.resize(20*1000,vector<int>(nums.size()+1,-1));
        return rec(nums,target,0);
    }
};