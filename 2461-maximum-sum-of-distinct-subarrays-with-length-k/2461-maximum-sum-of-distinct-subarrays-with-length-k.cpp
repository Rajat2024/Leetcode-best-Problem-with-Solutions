class Solution
{
    public:
        long long maximumSubarraySum(vector<int> &nums, int k)
        {
            map<long long, long long> mp;
            long long sum = 0;
            long long ans = INT_MIN;
            for (long long i = 0; i < k; i++)
            {
                mp[nums[i]]++;
                sum += nums[i];
            }
            for (long long i = k; i < nums.size(); i++)
            {
                if (mp.size() == k)
                {
                    ans = max(ans, sum);
                }
                mp[nums[i]]++;
                sum += nums[i];
                sum -= nums[i - k];
                mp[nums[i - k]]--;
                if (mp[nums[i - k]] == 0)
                    mp.erase(nums[i - k]);
            }
            if (mp.size() == k)
            {
                ans = max(ans, sum);
            }
            if (ans == INT_MIN)
                return 0;
            return ans;
        }
};