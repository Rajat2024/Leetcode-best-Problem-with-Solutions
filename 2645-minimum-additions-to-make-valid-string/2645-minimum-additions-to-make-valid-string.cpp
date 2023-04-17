class Solution
{
public:
    int addMinimum(string word)
    {
        int count = 0;
        for (int i = 0; i < word.size(); i++)
        {
            if (i + 2 < word.size() && word[i] == 'a' && word[i + 1] == 'b' && word[i + 2] == 'c')
                i += 2;
            else if (i + 1 < word.size() && word[i] == 'a' && word[i + 1] != 'b' && word[i + 1] == 'c')
                count++, i++;
            else if (i + 1 < word.size() && word[i] == 'a' && word[i + 1] == 'b' && word[i + 1] != 'c')
                count++, i++;
            else if (i + 1 < word.size() && word[i] == 'a' && word[i + 1] != 'b' && word[i + 1] != 'c')
                count += 2;
            else if (i + 1 < word.size() && word[i] == 'b' && word[i + 1] != 'c')
                count += 2;
            else if (i + 1 < word.size() && word[i] == 'b' && word[i + 1] == 'c')
                count++, i++;
            else if (word[i] == 'c')
                count += 2;
            else
                if (i + 1 == word.size())
                count += 2;
        }
        return count;
    }
};
