class Solution {
public:
    char nextGreatestLetter(vector<char>& lt, char t) {
        auto aa=upper_bound(lt.begin(),lt.end(),t)-lt.begin();
        // cout<<aa<<" ";
        if(aa==lt.size())
            return lt[0];
        return lt[aa];
    }
};