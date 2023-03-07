class Solution {
public:
    bool iscorrect(vector<int>& time, int trip,long long cc)
    {
        long long count=0;
        for(int i=0;i<time.size();i++)
        {
            count+=(cc/time[i]);
            if(count>=trip)
                return 1;
        }
        return 0;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long r=1e14;
        long long l=1;
        sort(time.begin(),time.end());
        long long ans=1e14;
        while(l<r)
        {
            long long m=l+(r-l)/2;
            if(iscorrect(time,totalTrips,m))
            {
                r=m;
                ans=min(ans,m);
            }
            else
            {
                l=m+1;
            }
        }
        // cout<<l<<r;
        return ans;
    }
};