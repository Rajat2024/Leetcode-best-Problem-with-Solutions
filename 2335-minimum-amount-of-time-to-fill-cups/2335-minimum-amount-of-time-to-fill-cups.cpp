class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int>q;
        for(int i=0;i<amount.size();i++)
        {
            if(amount[i]!=0)
                q.push(amount[i]);
        }
        int count=0;
        while(q.size()>=2)
        {
            int a=q.top();
            q.pop();
            int b=q.top();
            q.pop();
            if(a-1!=0)
                q.push(a-1);
            if(b-1!=0)
                q.push(b-1);
            count++;
        }
        if(q.size()!=0)
        count+=q.top();
        return count;
    }
};