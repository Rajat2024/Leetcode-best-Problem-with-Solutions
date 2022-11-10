//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long jumpingNums(long long X) {
        // code here
        if (X <= 9)
  return X;

queue<long long> q;
// 1 - 9 are jumping numbers we know (so insert them in queue)
for (int i = 1; i <= 9; i++)
  q.push(i);

long long ans = INT_MIN;
while (!q.empty())
{
  long long curr = q.front();
  ans = max(curr, ans);
  q.pop();

  long long last = curr % 10; // take the last digit from curr

  // generate the next jumping number
  int num1 = curr * 10 + last + 1;
  int num2 = curr * 10 + last - 1;

  // boundary cases
  if (last == 0)
  {
    // in case of say 10: we will get 101 from num1, and 99 (invalid) from num2, so checking num1 only
    if (num1 <= X)
      q.push(num1);
  }
  else if (last == 9)
  {
    // in case of say 89: we will get 900 (invalid) from num1, and 898 from num2, so checking num2 only
    if (num2 <= X)
      q.push(num2);
  }
  else
  {
    // normal case: check both
    if (num1 <= X)
      q.push(num1);
    if (num2 <= X)
      q.push(num2);
  }
}
return ans; // finally return the answer
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends