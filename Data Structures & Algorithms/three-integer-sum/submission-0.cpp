class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::vector<std::vector<int>> res;
        int n = nums.size();
        if (n < 3) return res;

        // 1. Sort the array to enable two-pointer traversal and grouping of duplicates
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; ++i) {
            // Early exit: if the anchor is positive, no three numbers can sum to 0
            if (nums[i] > 0) break;

            // Skip duplicate outer anchors
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum < 0) {
                    left++;
                } else if (sum > 0) {
                    right--;
                } else {
                    res.push_back({nums[i], nums[left], nums[right]});

                    // Skip identical values for the left pointer
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    // Skip identical values for the right pointer
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }

                    // Move both pointers to fresh numbers
                    left++;
                    right--;
                }
            }
        }

        return res;
    }
};
