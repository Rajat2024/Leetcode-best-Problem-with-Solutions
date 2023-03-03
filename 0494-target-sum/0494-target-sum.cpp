class Solution {
public:
    vector<vector<int>> dp;
    int rec(vector<int>& nums, int target,int i)
    {
      
        if(nums.size()==i)
        {
            if(target==0) return 1;
          return 0;
        }
        if(dp[1000+target][i]!=-1)  return dp[1000+target][i];
          return dp[1000+target][i]=rec(nums,target-nums[i],i+1) + rec(nums,target+nums[i],i+1);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        dp.resize(30001,vector<int>(nums.size(),-1));
        return rec(nums,target,0);
    }
};