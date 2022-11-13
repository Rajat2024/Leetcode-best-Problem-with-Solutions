class Solution
{
    public:
        int distinctAverages(vector<int> &nums)
        {
            map<float, int> mp;
            while (nums.size() != 0)
            {
                int mi = INT_MAX, miin;
                int ma = INT_MIN, maax;
                for (int i = 0; i < nums.size(); i++)
                {
                    if (nums[i] < mi)
                        mi = nums[i], miin = i;
                    if (nums[i] > ma)
                        ma = nums[i], maax = i;
                }
                float count = ((mi) + (ma)) / 2.0;
                mp[count]++;
                if (miin < maax)
                {
                    nums.erase(nums.begin() + maax);
                    nums.erase(nums.begin() + miin);
                }
                else
                {
                    nums.erase(nums.begin() + miin);
                    nums.erase(nums.begin() + maax);
                }
            }
            return mp.size();
        }
};