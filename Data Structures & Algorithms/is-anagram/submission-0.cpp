class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> str_s, str_t; 
        if(s.length() != t.length()){
            return false;
        }
        
        for(char c: s){
            str_s[c]++;
        }
        for(char d: t){
            str_t[d]++;
        }

        return str_s == str_t;
    }
};
