class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& ob) {
            int n=ob.size();
       vector<int>lis,ans(n,0);
            for(int i=0;i<ob.size();i++)
            {
                    if(lis.empty()||lis[lis.size()-1]<=ob[i])
                          { 
                            lis.push_back(ob[i]);
                    ans[i]=lis.size();
                    }
                    else
                    {
                            int a=upper_bound(lis.begin(),lis.end(),ob[i])-lis.begin();
                            lis[a]=ob[i];
                            ans[i]=a+1;
                    }
            }
            return ans;
    }
};