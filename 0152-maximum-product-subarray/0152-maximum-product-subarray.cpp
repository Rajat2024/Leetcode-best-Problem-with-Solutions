class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=INT_MIN;
            int curr_pro=1;
            for(int i=0;i<nums.size();i++)
            {
                 curr_pro*=nums[i];
                 ans=max(ans,curr_pro);
                 if(nums[i]==0)
                         curr_pro=1;
            }
            curr_pro=1;
            for(int i=nums.size()-1;i>=0;i--)
            {
                    curr_pro*=nums[i];
                    ans=max(ans,curr_pro);
                    if(nums[i]==0)
                            curr_pro=1;
            }
            return ans;
    }
};