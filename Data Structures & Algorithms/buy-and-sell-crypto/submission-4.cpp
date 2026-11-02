class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int maxi = 0;
        int n = prices.size();
        int result = 0;

        for (int x = 0; x < n; x++) {
            if (prices[x] < mini) mini = prices[x];
            result = prices[x] - mini;
            maxi = max(maxi, result);
        }

        return maxi;
    }
};
