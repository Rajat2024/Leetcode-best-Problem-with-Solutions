class Solution {
public:
    bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
    int ll(int s)
    {
        // cout<<"ll";
        int sum=0;
        while(s%2==0)
            s/=2,sum+=2;
        for(int i=3;i<=sqrt(s);i+=2)
        {
            while(s%i==0)
            {
                s/=i,sum+=i;
            }
        }
        if(s>2)
            sum+=s;
        return sum;
        
    }
    
    int smallestValue(int n) {
        if(n==4)
        return n;
        while(!isPrime(n))
        {
            n=ll(n);
        }
        return n;
    }
};