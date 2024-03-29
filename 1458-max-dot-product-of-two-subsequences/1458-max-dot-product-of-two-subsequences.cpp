class Solution {
public:
    vector< vector<int> >dp;
    int solve(vector<int>&nums1, vector<int>&nums2, int i, int j)
    {
        if(i>=nums1.size() or j>=nums2.size()) 
            return 0;  
        
        if(dp[i][j]!=-1) 
            return dp[i][j];
        
        // 4 choices
        int skip_1 = solve(nums1,nums2,i+1,j);
        int skip_2 = solve(nums1, nums2, i, j+1);
        int take_12 = nums1[i]*nums2[j] + solve(nums1, nums2, i+1, j+1);
        int skip_12 = solve(nums1, nums2, i+1, j+1);
        
        return dp[i][j] = max({skip_1, skip_2, take_12, skip_12});
    }
   
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size(), m=nums2.size();
            
        dp.resize(n+1, vector<int>(m+1,-1));
        
        int ans = solve(nums1,nums2,0,0);
            
        if(ans==0)
        {
            int a = *max_element(nums1.begin(), nums1.end());
            int b = *min_element(nums1.begin(), nums1.end());
           
            int c = *max_element(nums2.begin(), nums2.end());
            int d = *min_element(nums2.begin(), nums2.end());
           
           return max(a*d, b*c);
        }
        return ans;
    }
};