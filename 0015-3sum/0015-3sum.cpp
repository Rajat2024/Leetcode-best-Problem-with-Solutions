class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         sort(nums.begin() , nums.end());    
        if(nums.size() < 3)              
            return {};
        if(nums[0] > 0)                    // Base Case 2
            return {};
        
        unordered_map<int , int> mp;
        for(int i = 0 ; i < nums.size() ; ++i)
            mp[nums[i]] = i;
        
        vector<vector<int>> answer;
        
        for(int i = 0 ; i < nums.size() - 2 ; ++i)
        {     
            if(nums[i] > 0)     break;
            
            for(int j = i + 1 ; j < nums.size() - 1 ; ++j)
            {     
                int required = -1*(nums[i] + nums[j]);    
                if(mp.count(required) && mp[required] > j)
                    answer.push_back({nums[i] , nums[j] , required});
                
                j = mp[nums[j]]; 
            }
            i = mp[nums[i]];     //Update i to last occurence of 1st fixed number to avoid duplicate triplets.
        }
        return answer;  //Return answer vector
    }
};
// -1,0,1,2,-1,-4
// -4,-1,-1,0,1,2
// 