class Solution
{
public:
    
    int ladderLength(string beginWord, string endWord, vector<string> &wordList)
    {

        map<string, vector<string>> m;
        map<string, int> dist;
        int i, j, n = wordList.size(), b;
        string a;

        // from here
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (help(wordList[i], wordList[j]))
                {
                    m[wordList[i]].push_back(wordList[j]);
                    m[wordList[j]].push_back(wordList[i]);
                }
            }
        }

        // to here
        for (i = 0; i < n; i++)
        {
            if (help(beginWord, wordList[i]))
            {
                m[beginWord].push_back(wordList[i]);
                m[wordList[i]].push_back(beginWord);
            }
        }

        for (i = 0; i < n; i++)
        {
            if (help(endWord, wordList[i]))
            {
                m[endWord].push_back(wordList[i]);
                m[wordList[i]].push_back(endWord);
            }
            dist[wordList[i]] = INT_MAX;
        }
        queue<pair<string, int>> q;
        q.push({beginWord, 1});
        dist[beginWord] = 0;
        while (!q.empty())
        {
            a = q.front().first;
            b = q.front().second;
            q.pop();
            cout << a << endl;

            for (string c : m[a])
            {

                if (dist[c] > b + 1)
                {
                    q.push({c, b + 1});
                    dist[c] = b + 1;
                }
            }
        }

        if (dist[endWord] == INT_MAX)
            return 0;
        return dist[endWord];
    }
    bool help(string &s1, string &s2)
    {
        int count = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != s2[i])
                count++;
        }
        if (count == 1)
            return true;
        else
            return false;
    }
};