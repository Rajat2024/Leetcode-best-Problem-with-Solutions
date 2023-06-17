{
if (nums.size() <= 2)
return 1;
​
vector<int> left, right;
int root = nums[0];
​
for (int i = 1; i < nums.size(); i++)
{
if (nums[i] < root)
left.push_back(nums[i]);
else
right.push_back(nums[i]);
}
long long leftCount = total_required_BST(left);
long long rightCount = total_required_BST(right);
long long totalCount = binomialCoefficient(left.size() + right.size(), left.size());
​
return (((leftCount * rightCount) % MOD) * totalCount % MOD);
}
​
public:
int numOfWays(vector<int> &nums)
{
return (total_required_BST(nums) - 1 + MOD) % MOD;
}
};
```