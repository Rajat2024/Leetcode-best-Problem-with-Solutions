class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
            int l=0,mx=INT_MIN;
            for(int r=0;r<nums.size();r++)
            {
                    if(k<0)
                    {
                            
                            if(nums[l]==0)
                            k++;
                            
                            l++;
                    }
                    if(nums[r]==0)
                            k--;
                    if(k>=0)
                    mx=max(mx,r-l+1);
            }
            if(mx==INT_MIN)
                    return 0;
            return mx;
    }
};