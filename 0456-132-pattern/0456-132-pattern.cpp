class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        int mn=INT_MAX;
        int arr[n]; 
        for(int i=0;i<nums.size();i++)
        {
            mn=min(nums[i],mn);
            arr[i]=mn;
        }
        stack<int>st;
            
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]<nums[i])
            {
                while(!st.empty()&&st.top()<=arr[i])
                st.pop();

                if(!st.empty()&&st.top()<nums[i])
                return 1;
                    
                st.push(nums[i]);
            }
        }
        return 0;
    }
};