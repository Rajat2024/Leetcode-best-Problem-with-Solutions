class Solution
{
    public:
        int sumSubarrayMins(vector<int> &A)
        {
            stack<pair<int, int>> left, next;
           	// left is for the distance to previous less element
           	// right is for the distance to next less element
            vector<int> leftindex(A.size()), rightindex(A.size());

           	//initialize
            for (int i = 0; i < A.size(); i++) leftindex[i] = i + 1;
            for (int i = 0; i < A.size(); i++) rightindex[i] = A.size() - i;

            for (int i = 0; i < A.size(); i++)
            {
               	// for previous less
                while (!left.empty() && left.top().first > A[i])
                    left.pop();
                leftindex[i] = left.empty() ? i + 1 : i - left.top().second;
                left.push({ A[i],i});

               	// for next less
                while (!next.empty() && next.top().first > A[i])
                {
                    auto x = next.top();
                    next.pop();
                    rightindex[x.second] = i - x.second;
                }
                next.push({ A[i],i});
            }

            int ans = 0, mod = 1e9 + 7;
            for (int i = 0; i < A.size(); i++)
            {
                int h1=(long)A[i];
                int h2=((long)leftindex[i]*h1)%mod;
                int h3=((long)h2*rightindex[i])%mod;
                
                ans = (ans + h3) % mod;
            }
            return ans;
        }
};