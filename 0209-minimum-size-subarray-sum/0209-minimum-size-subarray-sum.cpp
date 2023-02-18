class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        map<int,int>mp;
        int sum=0;
        int ans=INT_MAX;
        // mp[0]=0;
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>=target)
            { 
               int find = sum-target;
               auto a=mp.lower_bound(find);
               if(a!=mp.end())
               {
                   if(a->first==find)
                       ans=min(ans,i-a->second);
                   else
                       ans=min(ans,i-a->second+1);
               }
            }
            mp[sum]=i;
            mx=max(nums[i],mx);
        }
        if(mx>=target)
            return 1;
        if(ans==INT_MAX)
        return 0;
       return ans;
    }
};
// 15
// [1,2,3,4,5] 
   // 1 3 6 10 15