class Solution
{
    public:
        string convertToTitle(int cn)
        {
            string str = "";
            while (cn > 0)
            {
                cn--;
                str += char(cn % 26 + 65);
                cn -= cn % 26;
                cn = cn / 26;
            }
            reverse(str.begin(),str.end());
            return str;
        }
};