class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s.length()==1)
            return 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                st.push(s[i]);
            else
            {
                 if(st.empty())
                     return 0;
                char ch=st.top();
                st.pop();
                if(s[i]==']'&& ch=='[')
                    continue;
                if(s[i]==')'&& ch=='(')
                    continue;
                if(s[i]=='}'&& ch=='{')
                    continue;
                return 0;
            }
                
        }
        if(st.empty())
        return 1;
        else
            return 0;
    }
};