class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>ans(num.size(),0);
        for(int i=num.size()-1;i>=0;i--)
        {
            ans[i]=num[i]+k;
            k=ans[i]/10; 
            ans[i]%=10;
        }
        reverse(ans.begin(),ans.end());
        while(k>0)
        {
            ans.push_back(k%10);
            k/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};