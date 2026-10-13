class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> stackHeights = {};
        int max_area = 0;
        for (int i = 0; i <= heights.size(); i++) {
            int currentHeight = (i == heights.size()) ? 0 : heights[i];
            while (!stackHeights.empty() && heights[stackHeights.top()] > currentHeight) {
                int height = heights[stackHeights.top()];
                stackHeights.pop();
                int width;
                if (stackHeights.empty()) {
                    width = i;
                } else {
                    width = i - stackHeights.top() - 1;
                }
                max_area = max(width * height, max_area);
            }
            stackHeights.push(i);
        }
        return max_area;
    }
};