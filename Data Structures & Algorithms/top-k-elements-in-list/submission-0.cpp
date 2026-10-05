class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> frequency = {};
        for (int num: nums){
            if (frequency.contains(num)){
                frequency[num]++;
            } else {
                frequency[num] = 1;
            }
        }
        vector<vector<int>> values(nums.size()+1);
        for (auto key_value : frequency){
            values[key_value.second].push_back(key_value.first);
        }
        vector<int> mostFrequent = {};
        int index = nums.size();
        while (mostFrequent.size()<k){
            for (int num:values[index]){
                mostFrequent.push_back(num);
                if (mostFrequent.size() == k){
                    break;
                }
            }
            index--;
        }
        return mostFrequent;
    }
};
