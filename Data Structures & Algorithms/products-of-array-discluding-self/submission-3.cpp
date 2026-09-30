class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int i = 0;
        int product = 1;
        int num_zeroes = 0;
        while(i<nums.size()){
            if(nums[i]!=0){
                product*=nums[i];
            }
            else{
                num_zeroes++;
                
            }
            ++i;
        }
        i = 0;


        while(i<nums.size()){
            if(num_zeroes==0){
                result.push_back(product/nums[i]);  
            }
            else if(num_zeroes==1){
                if(nums[i]!=0){
                    result.push_back(0);
                }
                else{
                    result.push_back(product);
                }
                
            }
            else{
                result.push_back(0);
                
            }
            ++i;
        }

        return result;
    }
};
