class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_str;
        for(string str: strs){
            string string_length = return_string_length(str);
            encoded_str += string_length + str;
        }
        return encoded_str;
    }

    string return_string_length(string s){
        int length = s.size();
        if (length>1000){
            return to_string(s.size());
        }
        else if(length>=100 && length<=999){
            return "0" + to_string(length);
        }
        else if(length>=10 && length<=99){
            return "00" + to_string(length);
        }
        else{
            return "000" + to_string(length);
        }
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while(i<s.size()){
            int size = stoi(s.substr(i,4));
            i+=4;


            string sub_string = s.substr(i, size);
            i+=size;

            result.push_back(sub_string);
        }

        return result;
        
    }
};
