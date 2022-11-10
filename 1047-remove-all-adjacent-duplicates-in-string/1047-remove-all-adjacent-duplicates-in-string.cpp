class Solution {
public:
    string removeDuplicates(string s) {
        for(int i=0;i<(int)s.size()-1;i++)
        {
                if(s[i]==s[i+1])
                {
                        s.erase(i,2);
                         if(i!=0)
                         i=i-2;
                        else
                                i--;
                       
                }
                // cout<<s.size()<<" "<<i<<" "<<(int)s.size()-1<<endl;
                // return s;
        }
            return s;
    }
};