class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=prices[0],ans=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            mn=min(prices[i],mn);
            ans=max(prices[i]-mn,ans);
        }
        return ans;
    }
};