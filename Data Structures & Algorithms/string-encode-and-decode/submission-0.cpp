class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string="";
        for (string str: strs){
            string new_str = to_string(str.size()) + "~" + str;
            encoded_string+=new_str;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs = {};
        int i = 0;
        while (i<s.size()){
            int j = i;
            while (s[j]!='~'){
                j++;
            }
            int length = stoi(s.substr(i,j-i));
            string str = s.substr(j+1, length);
            decoded_strs.push_back(str);
            i = j+1+length;
        }
        return decoded_strs;
    }
};
