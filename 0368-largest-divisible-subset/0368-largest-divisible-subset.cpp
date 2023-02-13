class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(begin(nums), end(nums));
int n = nums.size(), max_i = 0;
// initially dp[i]=1 since we can always form subset of size=1 ending at i.
// pred[i]=-1 because we havent found any predecessors for any subset yet
vector<int> dp(n, 1), pred(n, -1), ans;

for (int i = 1; i < n; i++)
{
  for (int j = 0; j < i; j++)
    if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1)
      dp[i] = dp[j] + 1, pred[i] = j; 
}

max_i=max_element(dp.begin(), dp.end())-dp.begin();
// start with index where largest subset ended. Reconstruct from that point to the start
for (; max_i >= 0; max_i = pred[max_i])
  ans.push_back(nums[max_i]);
return ans;
    }
};