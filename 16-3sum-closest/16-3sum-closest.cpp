class Solution 
{
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int length=nums.size();
        int nearest_value=INT_MAX;
        int answer;
        answer=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<length;i++)
        {
            int j=i+1;
                int k=length-1;
                while(j<k)
                {
                    int sum_present_now=nums[i]+nums[j]+nums[k];
                    if(sum_present_now==target)
                    {
                        return sum_present_now;
                    }
                    int obtain=abs(sum_present_now-target);
                    if(obtain<nearest_value)
                    {
                        nearest_value=obtain;
                        answer=sum_present_now;
                    }
                    if(target>sum_present_now)
                    {
                        j++;
                    }
                    else if(sum_present_now>target)
                    {
                        k--;
                    }
            }
        }
        return answer;
    }
};