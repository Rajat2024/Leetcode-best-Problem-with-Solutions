class Solution {
public:
    int uniquePaths(int m, int n) {
        long long ans=1;
        // m-1+n-1 -> m+n-2 me se min(m-1 , n-1)
        int j=m+n-2;
        for(int i=1;i<=min(m-1,n-1);i++,j--)
        {
            ans=(ans*(j)) / i;
        }
        return (int)ans;
    }
};