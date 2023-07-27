class Solution {
public:
    int findDuplicate(vector<int>& nums) {
          int n=nums.size();
            bool arr[n];
            memset(arr,0,sizeof(arr));
            int i=0;
            while(arr[i]==0)
            {
                    // cout<<i<<" ";
                    arr[i]=1;
                    i=nums[i];
                    // cout<<"|"<<i<<" ";
                    
            }
           
            return i;
    }
};