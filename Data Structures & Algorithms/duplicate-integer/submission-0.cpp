class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> temp;
        for(int i=0; i<nums.size(); ++i){
            if (!temp.count(nums[i])){
                temp.insert(nums[i]);
                }
            
            else{
                return true;
            }

        }
        return false;
    }
};