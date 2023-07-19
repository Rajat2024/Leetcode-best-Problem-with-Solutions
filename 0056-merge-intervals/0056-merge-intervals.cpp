bool comp(vector<int> &a,vector<int> &b) {
    if(a[0]==b[0])
	return a[1]>b[1];
    else
    return a[0]<b[0];
}
class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& it) {
        sort(it.begin(),it.end(),comp);
        for(auto aa:it)
        {
            cout<<aa[0]<<" "<<aa[1]<<endl;
        }
        vector<vector<int>>ans;
        vector<int> prev=it[0];
        for(auto aa:it)
        {
            if(aa[0]<=prev[1]) // merge intervals
            {
                prev[1]=max(aa[1],prev[1]);
            }
            else
            {
                ans.push_back(prev);
                prev=aa;
            }
        }
         ans.push_back(prev);
        return ans;
    }
};