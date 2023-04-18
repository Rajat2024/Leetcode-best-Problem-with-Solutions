class Solution {
public:
    string mergeAlternately(string w1, string w2) {
            int i=0,j=0,k=0;
            string str;
            while(i<w1.size()&&j<w2.size())
            {
                    str+=(k++)%2?w2[j++]:w1[i++];
            }
            if(i==w1.size())
                    str+=w2.substr(j);
            else
                    str+=w1.substr(i);
        
            return str;
    }
};