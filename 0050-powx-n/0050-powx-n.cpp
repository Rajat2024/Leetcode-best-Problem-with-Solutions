class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = 1;
        if (n < 0)
        {
            x = 1 / x;
        }
        long num=labs(n);
        
        if (x == 1)
            return x;
        if (x == -1)
        {
            if (n % 2)
                return x;
            else
                return abs(x);
        }
        while (num)
        {
            // if (x==0.00000)
            // {
            //     return 0.00000;
            // }
            if (num % 2)
            {
                ans *= x;

                if (num == 1)
                {
                    break;
                }
                num--;
            }
            else
            {
                x = x * x;
                num = num / 2;
            }
        }

        return ans;
    }
};