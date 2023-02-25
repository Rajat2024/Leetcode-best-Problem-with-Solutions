class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=prices[0],ans=INT_MIN;
        for(int x:prices)
        {
            mn=min(x,mn);
            ans=max(x-mn,ans);
        }
        return ans;
    }
};