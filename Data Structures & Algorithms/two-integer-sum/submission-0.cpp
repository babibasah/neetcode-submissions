class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indeces;

        for (int x = 0; x < nums.size(); x++) {
            indeces.emplace_back(nums[x], x);
        }

        sort(indeces.begin(), indeces.end());

        int i = 0, j = nums.size() - 1;
        while (i < j) {
            int diff = target - indeces[i].first - indeces[j].first;
            if (diff == 0) {
                return {min(indeces[i].second, indeces[j].second),
                max(indeces[i].second, indeces[j].second)};
            }
            else if (diff > 0) {
                i++;
            }
            else {
                j--;
            }
        }

        return {};
    }
};
