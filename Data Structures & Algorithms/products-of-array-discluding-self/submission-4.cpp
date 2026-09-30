class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> prefix_prod(size, 1), suffix_prod(size, 1), result(size);
        int product = 1;
        for(int i=1; i<size; ++i){
            prefix_prod[i] = product*nums[i-1];
            product*=nums[i-1];
        }
        product = 1;
        for(int i=size-2; i>=0; --i){
            suffix_prod[i] = product*nums[i+1];
            product*=nums[i+1];
        }

        for(int i=0; i<size; ++i){
            result[i] = prefix_prod[i]*suffix_prod[i];
        }

        return result;
    }  
};
