class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int>st;
        for(int i=0;i<ast.size();i++)
        {
            if(ast[i]>0||st.empty())
                st.push(ast[i]);
            else
            {
                int t=st.top();
                if(t<0)
                {
                    st.push(ast[i]);
                    continue;
                }
                else
                {
                    while(!st.empty() && st.top()>0&& st.top()<abs(ast[i]))
                    {
                        st.pop();
                    }
                    
                    if(!st.empty()&&st.top()<abs(ast[i]))
                    {
                       st.push(ast[i]); 
                    }
                    else{
                        if(!st.empty()&&st.top()==abs(ast[i]))
                        {
                            st.pop();
                        }
                        else
                        {
                    if(st.empty()&&ast[i]<0)
                       st.push(ast[i]);}
                    }
                }
            }
        }
        vector<int> res(st.size());
        for(int i = (int)st.size() - 1; i >= 0; i--) {
            res[i] = st.top();
            st.pop();
        }
        return res;
    }
};