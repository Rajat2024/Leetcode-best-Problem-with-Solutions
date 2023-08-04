class Solution {
public:
      unordered_map<string,int>mp;
      vector<int>memo;      
    bool rec(string s,int i)
    {
        // base condition
            if(i==s.size())
            return 1;
        //dp
          if(memo[i]!=-1)
            return memo[i];

        // main condition
            for(int ind=i;ind<s.size();ind++)
            {
                string s1 = s.substr(i,ind-i+1);
                if(mp[s1] && rec(s,ind+1))
                return memo[i]=1;
            }
        
            return memo[i]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        memo.resize(s.size()+1,-1);
        for(auto a:wordDict)
        mp[a]++;
         
        return rec(s,0);
         
    }
};