class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minStart = prices[0];
        int maxProfit = 0;
        for (int i = 1; i<prices.size(); i++){
            if (prices[i]-minStart > maxProfit){
                maxProfit = prices[i] - minStart;
            }
            if (prices[i]<minStart){
                minStart = prices[i];
            }
        }
        return maxProfit;
    }
};
