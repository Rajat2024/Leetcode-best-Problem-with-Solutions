class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str="";
        for(int i=0;i<word1.size();i++)
            str+=word1[i];
        string str1="";
        for(int j=0;j<word2.size();j++)
            str1+=word2[j];
        if(str.length()==str1.length())
        {
            for(int i=0;i<str.length();i++)
            {
                if(str[i]!=str1[i] )
                    return false;
            }
            return true;
        }
        return false;
    }
};