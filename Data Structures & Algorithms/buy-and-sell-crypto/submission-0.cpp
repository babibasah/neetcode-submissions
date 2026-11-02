class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int n = prices.size();
        int result = 0;

        while (right < n) {
            if (prices[right] <= prices[left]) {
                left = right;
                right = left + 1;
            }
            else {
                result = max(result, prices[right] - prices[left]);
                right++;
            }
        }

        return result;
    }
};
