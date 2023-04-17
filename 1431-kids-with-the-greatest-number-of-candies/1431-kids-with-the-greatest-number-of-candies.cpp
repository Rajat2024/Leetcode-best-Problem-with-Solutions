class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& can, int ec) {
        int mx=INT_MIN;
            for(int i=0;i<can.size();i++)
            {
                    mx=max(mx,can[i]);
            }
            vector<bool>ans;
            for(int i=0;i<can.size();i++)
            {
                    if(ec+can[i]>=mx)
                            ans.push_back(1);
                    else
                            ans.push_back(0);
            }
            return ans;
    }
};