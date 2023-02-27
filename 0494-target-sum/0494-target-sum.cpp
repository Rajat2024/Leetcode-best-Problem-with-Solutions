class Solution {
public:
    int rec(vector<int>& nums, int target,int i)
    {
        
        if(nums.size()==i)
        {
            if(target==0)
                return 1;
            else
                return 0;
        }
        
        int take=0;
            take=rec(nums,target-nums[i],i+1);
        
        int not_take=rec(nums,target+nums[i],i+1);
        return take+not_take;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return rec(nums,target,0);
    }
};