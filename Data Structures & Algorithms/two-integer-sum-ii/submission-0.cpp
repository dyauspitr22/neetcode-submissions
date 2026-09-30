class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int length = numbers.size();
        int last_index = length - 1;
        int left, right, sum;
        vector<int> indices;
        for(int i = 0; i < last_index;){
            left = numbers[i];
            right = numbers[last_index];
            sum = left + right;
            if(sum == target){
                indices.push_back(i+1);
                indices.push_back(last_index+1);
                break;
            }
            else if(sum > target){
                --last_index;
            }
            else{
                ++i;
            }
        }

        return indices;
    }
};
