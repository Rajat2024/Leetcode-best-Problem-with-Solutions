class Solution
{
    public:
        vector<int> findErrorNums(vector<int> &nums)
        {
            unordered_map<int, int> mp;
            for (int i = 0; i < nums.size(); i++)
            {
                mp[nums[i]]++;
            }
            int n = nums.size();
            vector<int> ans;
            int a,b;
            for (int i = 1; i <= n; i++)
            {
                if (mp[i] == 2)
                    a=i;
                if (mp[i] == 0)
                    b=i;
            }
            return {a,b};
        }
};