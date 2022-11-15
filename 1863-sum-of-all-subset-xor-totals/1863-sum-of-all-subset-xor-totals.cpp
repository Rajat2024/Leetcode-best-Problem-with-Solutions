class Solution
{
    public:
        int subsetXORSum(vector<int> &nums)
        {
            int nsubset = pow(2, nums.size());
            int ans = 0;
            for (int i = 0; i < nsubset; i++)
            {
                int currxor = 0;
                int nn = i;
                int j = nums.size() - 1;
                while (nn != 0)
                {
                    if (nn & 1)
                        currxor ^= nums[j];
                    j--;
                    nn >>= 1;
                }
                ans += currxor;
            }
            return ans;
        }
};