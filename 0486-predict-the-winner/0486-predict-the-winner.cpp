class Solution {
public:
    bool rec(vector<int>& nums, int i, int j, int s1, int s2, bool cc) {
        if (i > j)
            return s1 >= s2;

        if (cc)
            return (rec(nums, i + 1, j, s1 + nums[i], s2, false) || rec(nums, i, j - 1, s1 + nums[j], s2, false));
        else
            return (rec(nums, i + 1, j, s1, s2 + nums[i], true) && rec(nums, i, j - 1, s1, s2 + nums[j], true));
        // here we use && becuse if T||rec() then next call will not be happen so we want if T||rec() then next rec must be run 
        // 
    }

    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size() - 1;
        return rec(nums, 0, n, 0, 0, true);
    }
};