class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
         map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<k;i++)
        {
           mp[arr[i]]++;
        }
        vector<int>ans;
        auto it1=mp.end();
        it1--;
        ans.push_back(it1->first);
        for(int i=1;i<(n-k+1);i++)
        {
            mp[arr[i-1]]--;
            mp[arr[i+k-1]]++;
            if(mp[arr[i-1]]==0)
            mp.erase(arr[i-1]);
            it1=mp.end();
            it1--;
            ans.push_back(it1->first);
        }
        return ans;
    }
};