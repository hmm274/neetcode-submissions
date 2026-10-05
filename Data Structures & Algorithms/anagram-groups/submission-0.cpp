class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int, 26>, vector<string>> wholeMap;

        for (string str : strs) {
            array<int, 26> strMap = {};

            for (char c : str) {
                strMap[c - 'a']++;
            }

            wholeMap[strMap].push_back(str);
        }

        vector<vector<string>> result;

        for (auto& group : wholeMap) {
            result.push_back(group.second);
        }

        return result;
    }
};