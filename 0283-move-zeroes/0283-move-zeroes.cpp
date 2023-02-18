class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0,r=0;
        if(nums.size()==1)
            return;
        while(r<nums.size()&&l<nums.size())
        {
            while(l<nums.size()&&nums[l]!=0)
            l++;
            while(r<nums.size()&&nums[r]==0)
            r++;
            if(l>=nums.size())
                return;
            if(r>=nums.size())
                return;
            if(l<r)
            swap(nums[l],nums[r]);
            else
            {l++,r++;
            swap(l,r);}
            
        }
        
    }
};