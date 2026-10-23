class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;

        for (int x = 0; x < nums.size(); x++) {
            int diff = target - nums[x];
            if (indices.contains(diff)) {
                return {indices[diff], x};
            }

            indices[nums[x]] = x;
        }

        return {};
    }
};
