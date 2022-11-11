class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0;
        int r=1;
        while(l!=nums.size()-1)
        {
            if(nums[l]==nums[r])
            {
                nums.erase(nums.begin()+r);
            }
            else
                l++,r++;
            // cout<<l<<" "<<r<<"||";
        }
        return nums.size();
    }
};