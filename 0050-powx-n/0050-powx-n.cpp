class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = 1;
        if (n < 0)
        {
            n = abs(n);
            x = 1 / x;
        }

        if (x == 1)
            return x;
        if (x == -1)
        {
            if (n % 2)
                return x;
            else
                return abs(x);
        }
        while (n)
        {
            if (x==0)
            {
                // cout<<setprecision(7);
                // cout<<x;
                return 0.00000;
            }
            if (n % 2)
            {
                ans *= x;

                if (n == 1)
                {
                    break;
                }
                n--;
            }
            else
            {
                x = x * x;
                n = n / 2;
            }
        }

        return ans;
    }
};