class Solution {
        map<char,string>mp;
public:
        void rec(string digits,vector<string>&ans,int i,string &st)
        {
                if(st.size()==digits.size())
                {
                    ans.push_back(st);
                    return;
                }
                
                if(i>=digits.size())
                        return;
               
                for(auto a:mp[digits[i]])
                {
                        string s1=st+a;
                        rec(digits,ans,i+1,s1);
                }
        }
    
    vector<string> letterCombinations(string digits) {
            if(digits.size()==0)
                    return {};
            mp['2']="abc";
            mp['3']="def";
            mp['4']="ghi";
            mp['5']="jkl";
            mp['6']="mno";
            mp['7']="pqrs";
            mp['8']="tuv";
            mp['9']="wxyz";
            vector<string>ans;
                string st="";
            rec(digits,ans,0,st);
            return ans;
    }
};