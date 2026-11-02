class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result = 0;
        int left = 0, right = heights.size() - 1;

        while (left < right) {
            int width = right - left;
            int h_left = heights[left];
            int h_right = heights[right];
            int height = min(h_left, h_right);
            result = max(result, width * height);

            while (left < right && heights[left] <= height) left++;
            while (left < right && heights[right] <= height) right--;
        }

        return result;
    }
};
