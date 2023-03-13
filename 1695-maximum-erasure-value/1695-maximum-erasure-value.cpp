class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum=0;
        int left=0;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            //acquire
            sum+=nums[i];
            mp[nums[i]]++;
            //release
            while(mp.size()<(i-left+1))
            {
                mp[nums[left]]--;
                sum-=nums[left];
                if(mp[nums[left]]==0)
                    mp.erase(nums[left]);
                left++;
            }
            ans=max(sum,ans);
        }
        return ans;
    }
};