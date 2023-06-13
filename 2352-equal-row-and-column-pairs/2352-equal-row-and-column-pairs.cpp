class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
      map<vector<int>,int>mp;
        for(int i=0;i<grid.size();i++)
        {
            mp[grid[i]]++;
        }
        int count=0;
        for(int i=0;i<grid[0].size();i++)
        {
            vector<int>v;
            for(int j=0;j<grid.size();j++)
            {
                v.push_back(grid[j][i]);
            }
            if(mp.find(v)==mp.end())
                mp[v]++;
            else
                count+=mp[v];
                
                // v.clear();
        }
        return count;
    }
};