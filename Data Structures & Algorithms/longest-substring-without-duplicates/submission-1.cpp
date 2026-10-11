class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> characters = {};
        int left = 0;
        int right = 0;
        int max_length = 0;
        while (right < s.size()){
            while (characters.contains(s[right])){
                characters.erase(s[left]);
                left++;
            }
            characters.insert(s[right]);
            max_length = max(right - left + 1, max_length);
            right++;
        }
        return max_length;
    }
};
