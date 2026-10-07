class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numbers = {};
        for (int num : nums){
            if (!numbers.contains(num)){
                numbers.insert(num);
            }
        }
        int maxSequence = 0;
        for (int num : numbers){
            if (!numbers.contains(num-1)){
                int seq = 0;
                int i = 0;
                while (numbers.contains(num+i)){
                    seq++;
                    i++;
                }
                if (seq>maxSequence){
                    maxSequence = seq;
                }
            }
        }
        return maxSequence;
    }
};
