class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int l=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                l=i;
                break;
            }
        }
        int r=0;
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i-1]>nums[i])
            {
                r=i;
                break;
            }
        }
        // cout<<l<<" "<<r;
        if(l==0&&r==0)
            return 0;
        int mn=INT_MAX,mx=INT_MIN;
        for(int i=l;i<=r;i++)
        {
            mn=min(mn,nums[i]);
            mx=max(mx,nums[i]);
        }
        while(l-1>=0&&nums[l-1]>mn)
        {
            l--; 
        }
        while(r+1<nums.size()&&nums[r+1]<mx)
            r++;
        
        return r-l+1;
    }
};