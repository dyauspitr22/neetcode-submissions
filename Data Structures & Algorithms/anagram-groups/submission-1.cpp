class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams_map;
        vector<vector<string>> result;
        for(auto original_str: strs){
            string key = encode_string(original_str);
            anagrams_map[key].push_back(original_str);
        }
        for(auto &entry: anagrams_map){
            result.push_back(entry.second);
        }
        return result;
    }

private:
    string encode_string(string &s){
        vector<int> count(26, 0);
        for(char c: s){
            count[c - 'a']++;
        }
        string generated_key;
        for(int freq: count){
            generated_key += to_string(freq) + "#";
        }

        return generated_key;
    }

};