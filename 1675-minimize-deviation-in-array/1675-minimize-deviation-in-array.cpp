class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int>q;
        int mi=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2)
                nums[i]=(nums[i]*2);
            q.push(nums[i]);
            mi=min(nums[i],mi);
        }
        int ans=INT_MAX;
        while(1)
        {
            int n=q.top();
            q.pop();
            ans=min(ans,n-mi);
            if(n%2)
                break;
            n=n/2;
            mi=min(mi,n);
            q.push(n);
        }
        return ans;
    }
};