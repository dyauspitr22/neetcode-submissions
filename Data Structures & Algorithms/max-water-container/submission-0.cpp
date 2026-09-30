class Solution {
public:
    int maxArea(vector<int>& heights) {
        int length = size(heights), start = 0, end = length - 1;
        int left = heights[start], right = heights[end];
        int max_area = 0;
        while(start < end){
            int left = heights[start], right = heights[end];
            int ans = min(heights[start], heights[end]) * (end - start);
            if(ans > max_area) max_area = ans;
            if(left < right){
                start++;
            }
            else if(left > right){
                end--;
            }
            else{
                start++;
                end--;
            }

        }

    return max_area;
    }
};
