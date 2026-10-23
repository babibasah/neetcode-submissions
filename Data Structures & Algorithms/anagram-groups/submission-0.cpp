class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> sorted = strs;
        for (int x = 0; x < strs.size(); x++) {
            sort(sorted[x].begin(), sorted[x].end());
        }

        unordered_map<string, vector<string>> memo;
        vector<vector<string>> result;
        for (int y = 0; y < strs.size(); y++) {
            memo[sorted[y]].push_back(strs[y]);
        }

        for (auto& [key, group] : memo) {
            result.push_back(group);
        }

        return result;
    }
};
