class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> hashMap = {};
        for (int num : nums){
            if (hashMap.contains(num)) {
                return true;
            } else {
                hashMap[num] = 1;
            }
        }
        return false;
    }
};