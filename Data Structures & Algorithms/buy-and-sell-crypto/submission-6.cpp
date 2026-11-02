class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int maxi = 0;

        for (int price : prices) {
            maxi = max(maxi, price - mini);
            mini = min(mini, price);
        }

        return maxi;
    }
};
