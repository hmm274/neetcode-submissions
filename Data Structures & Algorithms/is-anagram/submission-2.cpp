class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char,int> hashMap = {};
        for (char c : s){
            if (hashMap.contains(c)){
                hashMap[c] += 1;
            } else {
                hashMap[c] = 1;
            }
        }
        for (char c : t){
            if (hashMap.contains(c)){
                hashMap[c] -= 1;
                if (hashMap[c] == 0){
                    hashMap.erase(c);
                }
            } else {
                return false;
            }
        }
        if (hashMap.empty()){
            return true;
        }
        return false;
    }
};
