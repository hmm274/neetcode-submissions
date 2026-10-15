
class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int left = 0;
        int maxLength = 0;

        for (int right = 0; right < s.size(); right++) {
            freq[s[right]]++;

            int maxFreq = 0;
            for (auto [c, count] : freq) {
                maxFreq = max(maxFreq, count);
            }

            while ((right - left + 1) - maxFreq > k) {
                freq[s[left]]--;
                left++;

                maxFreq = 0;
                for (auto [c, count] : freq) {
                    maxFreq = max(maxFreq, count);
                }
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};