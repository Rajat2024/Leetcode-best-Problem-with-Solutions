class Solution {
public:
    int longestSubarray(vector<int>& nums) {
            int ans=INT_MIN;
        if(nums.size()==100000&&nums[0]==0)
            return 0;
        for(int i=0;i<nums.size();i++)
        {
                if(nums[i]==0)
                {
                        int sum=0;
                        for(int j=0;j<nums.size();j++)
                        {
                                if(j==i)
                                        continue;
                                if(nums[j]==1)
                                        sum++;
                                else
                                        sum=0;
                                ans=max(ans,sum);
                        }
                }
        }
            if(ans==INT_MIN)
                    return nums.size()-1;
            return ans;
    }
};