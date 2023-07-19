bool comp(vector<int> &a,vector<int> &b) {
	return a[1]<b[1];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
		sort(intervals.begin(),intervals.end(),comp);  
        int ans=-1;
        vector<int > prev=intervals[0];
        for(auto aa:intervals)
        {
            if(aa[0]<prev[1])
                ans++;
            else
                prev=aa;
        }
        return ans;
    }
};