class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result = 0;
        int n = heights.size();
        int left = 0, right = n - 1;

        while (left < right) {
            int width = right - left;
            int height = min(heights[left], heights[right]);
            result = max(result, width * height);

            if (height == heights[left]) left++;
            else if(height == heights[right]) right--;
        }

        return result;
    }
};
