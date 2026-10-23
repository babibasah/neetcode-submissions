class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int arr_length = nums.size();
        unordered_map<int, bool> memo;

        for (int x = 0; x < arr_length; x++) {
            int num = nums[x];
            if (memo.contains(num)) {
                return true;
            }
            else {
                memo[num] = true;
            }
        }

        return false;
    }
};