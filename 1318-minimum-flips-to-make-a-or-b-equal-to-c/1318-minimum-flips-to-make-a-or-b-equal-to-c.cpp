class Solution
{
    public:
        int minFlips(int a, int b, int c)
        {
            int res = 0;

            while (a > 0 || b > 0 || c > 0)
            {

                int bitOfA = a &1;
                int bitOfB = b &1;
                int bitOfC = c &1;

                if ((bitOfA | bitOfB) != bitOfC)
                {

                    if (bitOfC == 1)
                    {
                        res++;
                    }
                    else
                    {
                        res += (bitOfA + bitOfB);
                    }
                }

                a = a >> 1;
                b = b >> 1;
                c = c >> 1;
            }

            return res;
        }
};