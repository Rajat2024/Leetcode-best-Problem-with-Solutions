class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
         set<int>s;
            for(int i=0;i<nums.size();i++)
            {
                    s.insert(nums[i]);
            }
            vector<int>uni;
            for(auto a:s)
            {
                    uni.push_back(a);
            }
            sort(uni.begin(),uni.end());
            int ans=INT_MAX;
            for(int i=0;i<uni.size();i++)
            {
                    int begin=uni[i];
                    int last=uni[i]+n-1;
                    auto a = upper_bound(uni.begin(),uni.end(),last);
                    int len= a-uni.begin();
                    ans=min(ans,n-(len-i));
                    
            }
            return ans;
    }
};