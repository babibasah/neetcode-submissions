class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result = 0;
        int left = 0, right = heights.size() - 1;

        while (left < right) {
            int width = right - left;
            int height = min(heights[left], heights[right]);
            result = max(result, width * height);

            while (left < right && heights[left] <= height) left++;
            while (left < right && heights[right] <= height) right--;
        }

        return result;
    }
};
