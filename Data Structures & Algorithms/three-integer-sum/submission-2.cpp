class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int length = size(nums);
        sort(nums.begin(), nums.end());
        int last_index = length-1;
        vector<vector<int>> result;
        for(int i = 0; i < length - 1; ++i){
            int j = i + 1;
            int num1 = nums[i];
            int last_index = length - 1;
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            else{
                while(j<last_index){
                int num2 = nums[j]; //left number
                int num3 = nums[last_index]; // right number
                int sum = num1 + num2 + num3;
                if(sum == 0){
                    result.push_back({num1, num2, num3});

                    while (j < last_index && nums[j] == nums[j + 1]) j++; 
                    while (j < last_index && nums[last_index] == nums[last_index - 1]) last_index--;
                    ++j;
                    --last_index;
                }
                else if(sum < 0){
                    ++j;
                }
                else{
                    --last_index;
                }
            }
            }
        }
        return result;
    }
};
