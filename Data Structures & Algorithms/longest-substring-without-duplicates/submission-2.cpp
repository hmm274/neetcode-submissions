class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> characters(256, 0);
        int left = 0;
        int right = 0;
        int max_length = 0;
        while (right < s.size()){
            while (characters[s[right]]){
                characters[s[left]]--;
                left++;
            }
            characters[s[right]]++;
            max_length = max(right - left + 1, max_length);
            right++;
        }
        return max_length;
    }
};
