class Solution {
public:
    int x,y;
    double m;
    int equation(int x1,int y1)
    {
        if(m==INT_MAX)
            return x-x1;
        return m*x1-y1-m*x+y;
    }
    bool checkStraightLine(vector<vector<int>>& cd) {
        x=cd[0][0];
        y=cd[0][1];
        if(cd[1][0]-cd[0][0] == 0)
            m=INT_MAX;
        else
            m=(double)(cd[1][1]-cd[0][1])/(cd[1][0]-cd[0][0]);
        for(int i=0;i<cd.size();i++)
        {
            if(equation(cd[i][0],cd[i][1])!=0)
                return 0;
        }
        return 1;
    }
};