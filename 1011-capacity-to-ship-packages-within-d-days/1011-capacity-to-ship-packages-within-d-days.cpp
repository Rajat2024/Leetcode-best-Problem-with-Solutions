class Solution {
public:
    bool iscorrect(vector<int>&weights,int mid,int days)
    {
        int sum=0, curr=1;
        for(int i=0;i<weights.size();i++)
        {
            sum+=weights[i];
            if(sum>mid)
            {
                curr++;
                sum=weights[i];
            }
        }
        
        if(curr>days)
            return 0;
        else
            return 1;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l,r=0;
         l=INT_MIN;
        for(int i=0;i<weights.size();i++)
        {
            l=max(weights[i],l);
            r+=weights[i];
        }
        int ans=-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(iscorrect(weights,mid,days))
            {
                r=mid-1;
                ans=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};