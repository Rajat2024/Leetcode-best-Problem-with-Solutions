class Solution {
public:
    int lengthOfLongestSubstring(string str) {
            set<int>s;
  int j=0,ans=0;
  for(int i=0;i<str.size();i++)
  {
    while(s.find(str[i])!=s.end())
    {
       s.erase(str[j]);
       j++;
    }
    s.insert(str[i]);
    ans=max(ans,i-j+1);
  }
            return ans;
    }
};