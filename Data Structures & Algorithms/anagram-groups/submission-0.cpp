class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams_map;
        vector<vector<string>> result;
        for(auto original_str: strs){
            string sorted_str = original_str;
            sort(sorted_str.begin(), sorted_str.end());
            anagrams_map[sorted_str].push_back(original_str);
        }
        for(auto &entry: anagrams_map){
            result.push_back(entry.second);
        }

        return result;
    }
};
