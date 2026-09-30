class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> test;
        for(int i=0; i<nums.size(); ++i){
            int complement = target-nums[i];
            if(test.count(target-nums[i])){
                return {test[complement], i};
            }
            test[nums[i]] = i;
        }
        return {};
    }
 
};
