class Solution {
public:
    bool isPalindrome(string s) {
        string new_string;
        for(char c: s){
            if(c != ' ' and isalnum(c)){
                new_string+=char(tolower(c));
            }
        } 
        cout << new_string;
        string reversed_string;
        for(int i = new_string.length() - 1; i >= 0; --i){
            reversed_string+=new_string[i];
        }
        cout << reversed_string;
        if(new_string == reversed_string){
            return true;
        }
        return false;
    }
};
