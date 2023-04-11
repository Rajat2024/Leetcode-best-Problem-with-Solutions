class Solution {
public:
    int kItemsWithMaximumSum(int o, int z, int n, int k) {
        int ans=0;
            
        if(k<=o)
            return k;
       if(k>=o)
           k-=o,ans+=o;
            
        if(k<=z)
            return ans;
        if(k>=z)
            k-=z;
            
        if(k<=n)
            return ans-k;
            
        if(k>n)
            k-=n,ans-=n;
            
        return ans;
    }
};