class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0,ans1=INT_MAX;
        int count2=0,ans2=INT_MAX;
            for(int i=0;i<nums.size();i++)
            {
                    if(ans1==nums[i])
                            count1++;
                    else
                            if(ans2==nums[i])
                                    count2++;
                    else
                            if(count1==0)
                                    count1=1,ans1=nums[i];
                    else
                            if(count2==0)
                                    count2=1,ans2=nums[i];
                    else
                            count1--,count2--;
            } 
            vector<int> output;
        int countMajority = nums.size()/3;
        count1 = 0, count2 = 0;
        for(auto element : nums){
            if(ans1 == element){
                count1++;
            }
            if(ans2 == element){
                count2++;
            }
        }
        if(count1 > countMajority){
            output.push_back(ans1);
        }
        if(count2 > countMajority){
            output.push_back(ans2);
        }
        return output;
    }
};