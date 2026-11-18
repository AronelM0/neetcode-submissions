class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mapa;
        for(int i = 0; i < nums.size(); ++i){
            mapa[nums[i]]++;
            if(mapa[nums[i]] > 1)
                return 1;
        }
        return 0;
    }
};