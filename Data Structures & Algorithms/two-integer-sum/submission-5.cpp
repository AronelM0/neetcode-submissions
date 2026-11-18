class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> perechi;
        
       
        for(int i = 0; i < nums.size(); ++i){
            perechi[nums[i]] = i;
        }
        
        for(int i = 0; i<nums.size();++i){
            int tar = target - nums[i];
            if( perechi.count(tar) && perechi[tar] != i){
                return {i, perechi[tar]};
            }        
        }
        
           
              

        
        return {};
    }
};
