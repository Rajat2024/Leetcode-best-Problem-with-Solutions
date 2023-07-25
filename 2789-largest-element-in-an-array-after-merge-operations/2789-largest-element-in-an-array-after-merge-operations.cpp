class Solution {
public:
    long long maxArrayValue(vector<int>& nn)
    {
        int n=nn.size();
        int i=n-2,j=n-1;
        vector<long long>nums;
        
        for(int i=0;i<n;i++)
        {
            nums.push_back(nn[i]);
        }
        while(i>=0)
        {
            if(nums[i]<=nums[j])
                nums[j]=nums[j]+nums[i],i--;
            else
                j=i,i--;
        }
        
        long long ans=LLONG_MIN;
        for(int i=0;i<n;i++)
            ans=max(ans,nums[i]);
        return ans;
    }
};