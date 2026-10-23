class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;

        for (int x = 0; x < nums.size(); x++) {
            int diff = target - nums[x];
            if (indices.count(diff)) {
                return {min(x, indices[diff]), max(x, indices[diff])};
            }

            indices[nums[x]] = x;
        }

        return {};
    }
};
