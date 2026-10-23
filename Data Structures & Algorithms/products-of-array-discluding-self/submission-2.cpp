class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);
        int prefix = 1;
        for (int x = 0; x < n; x++) {
            result[x] = prefix;
            prefix *= nums[x];
        }

        int suffix = 1;
        for (int y = n - 1; y >= 0; y--) {
            result[y] *= suffix;
            suffix *= nums[y];
        }

        return result;
    }
};
