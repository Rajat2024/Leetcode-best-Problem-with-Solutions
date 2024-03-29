#include <algorithm>
class Solution {
public:
    vector<int>v1,v2;
    
    Solution(vector<int>& nums) {
        v1=nums;
        v2=v1;
    }
    
    vector<int> reset() {
        // v2=v1;
        return v1;
    }
    
    vector<int> shuffle() {
        prev_permutation(v2.begin(),v2.end());
        return v2;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */