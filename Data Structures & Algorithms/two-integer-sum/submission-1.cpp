class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hashMap = {};
        for (int i; i<nums.size(); i++){
            int complement = target-nums[i];
            if (hashMap.contains(complement)){
                return {hashMap[complement], i};
            }
            hashMap[nums[i]] = i;
        }
    }
};
