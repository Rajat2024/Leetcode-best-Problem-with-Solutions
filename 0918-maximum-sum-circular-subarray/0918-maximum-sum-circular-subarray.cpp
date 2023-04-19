class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
            int min_sum=INT_MAX;
            int curr_sum=0;
            int total_sum=0;
            for(int i=0;i<nums.size();i++)
            {
                    total_sum+=nums[i];
               curr_sum+=nums[i]; 
                    min_sum=min(curr_sum,min_sum);
                    if(curr_sum>0)
                            curr_sum=0;
            }
            int max_sum=INT_MIN;
            curr_sum=0;
            for(int i=0;i<nums.size();i++)
            {
                    curr_sum+=nums[i];
                    max_sum=max(curr_sum,max_sum);
                    if(curr_sum<0)
                            curr_sum=0;
            }
            if(max_sum<0)
                    return max_sum;
            return max(total_sum-min_sum,max_sum);
    }
};