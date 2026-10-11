class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hash_map = {};
        int left = 0;
        int right = 0;
        int max_length = 0;
        while (right < s.size()){
            while (hash_map.contains(s[right])){
                hash_map.erase(s[left]);
                left++;
            }
            hash_map[s[right]] = right;
            max_length = max(right - left + 1, max_length);
            right++;
        }
        return max_length;
    }
};
