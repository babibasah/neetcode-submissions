class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> memo;
        for (int x = 0; x < nums.size(); x++) {
            memo[nums[x]]++;
        }
        
        priority_queue<pair<int, int>> leaderboard;
        for (auto& pairs : memo) {
            leaderboard.push({pairs.second, pairs.first});
        }

        vector<int> result;
        while (k > 0) {
            int num = leaderboard.top().second;
            result.push_back(num);
            leaderboard.pop();
            k--;
        }

        return result;
    }
};
