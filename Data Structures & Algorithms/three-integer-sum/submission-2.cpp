class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        if (n < 3) {
            return result;
        }

        sort(nums.begin(), nums.end());
        
        for (int x = 0; x < n - 2; x++) {
            if (nums[x] > 0) break;
            if (x > 0 && nums[x - 1] == nums[x]) continue;

            int left = x + 1;
            int right = n - 1;

            while (left < right) {
                int total = nums[x] + nums[left] + nums[right];

                if (total < 0) {
                    left++;
                }
                else if (total > 0) {
                    right--;
                }
                else {
                    result.push_back({nums[x], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }

                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }

                    left++;
                    right--;
                }
            }
        }
        return result;
    }
};
