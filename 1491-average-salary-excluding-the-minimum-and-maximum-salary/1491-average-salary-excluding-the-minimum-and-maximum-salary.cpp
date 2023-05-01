class Solution {
public:
    double average(vector<int>& sa) {
        sort(sa.begin(),sa.end());
           double ans=0;
            for(int i=1;i<sa.size()-1;i++)
            {
                    ans+=sa[i];
            }
            if(sa.size()==2)
                    return 0;
            return ans/(sa.size()-2);
    }
};