class Solution {
public:
    int addDigits(int num) {
        if(num==0)
                return 0;
            while(((int)(log10(num)+1))!=1)
            {
                    int n=num;
                    int sum=0;
                    while(n!=0)
                    {
                            sum+=n%10;
                            n=n/10;
                    }
                    num=sum;
            }
            return num;
    }
};