class Solution
{
public:
    bool issequence(string s1, string s2)
    {
        int count = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != s2[i] && (count == 0 || count == 1))
                count++;
        }
        if (count != 1)
            return 0;
        else
            return 1;
    }
    int ladderLength(string beginWord, string endWord, vector<string> &wordList)
    {
            int n=wordList.size();
             wordList.push_back(beginWord);
        vector<vector<int>> adj(wordList.size());
        // 5000*5000*10= 250000000 gives TLE\U0001f612\U0001f612 
        for (int i = 0; i < wordList.size(); i++)
        {
            for (int j = i + 1; j < wordList.size(); j++)
            {
                if (issequence(wordList[i], wordList[j]))
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int end;
        for (int i = 0; i < wordList.size(); i++)
            if (wordList[i] == endWord)
                end = i;
        int ans = INT_MAX;
                queue<int> q;
                q.push(n);
                vector<int> visi(wordList.size(), -1);
                visi[n] = 0;
                while (!q.empty())
                {
                        bool l=0;
                    int node = q.front();
                    q.pop();
                    for (int j = 0; j < adj[node].size(); j++)
                    {
                        if (visi[adj[node][j]] == -1)
                            q.push(adj[node][j]),visi[adj[node][j]]=visi[node]+1;
                            if (adj[node][j] == end)
                             {
                                ans = min(ans, visi[adj[node][j]]);
                                break;
                                l=1;
                             }
                    }
                        
                        if(l==1)
                           break;     
                }
                  
            
            
            if(ans==INT_MAX)
                    return 0;
            else
                    return ans+1;
    }
};