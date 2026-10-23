class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        prefix.push_back(1);
        for (int x = 0; x < nums.size(); x++) {
            int next_prefix = prefix.back() * nums[x];
            prefix.push_back(next_prefix);
        }

        vector<int> suffix;
        suffix.push_back(1);
        for (int y = nums.size() - 1; y >= 0; y--) {
            int next_suffix = suffix.back() * nums[y];
            suffix.push_back(next_suffix);
        }

        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int product = prefix[i] * suffix[nums.size() - i - 1];
            result.push_back(product);
        }

        return result;
    }
};
