class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, maxLength = 0;
        // Map stores the last seen index of each character
        unordered_map<char, int> record;

        for (int j = 0; j < s.size(); ++j) {
            char rightChar = s[j];

            // 1. Check & Slide: If duplicate is inside the current window
            if (record.count(rightChar) && record[rightChar] >= i) {
                i = record[rightChar] + 1;
            }

            // 2. Update: Store/Update the latest index of the character
            record[rightChar] = j;

            // 3. Measure: Calculate length and update global max
            int currentLength = j - i + 1;
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        }

        return maxLength;
    }
};