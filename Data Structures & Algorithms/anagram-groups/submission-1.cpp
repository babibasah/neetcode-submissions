class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> memo;
        for (int x = 0; x < strs.size(); x++) {
            string temp = strs[x];
            sort(temp.begin(), temp.end());
            
            memo[temp].push_back(strs[x]);
        }

        vector<vector<string>> result;
        for (auto& pair : memo) {
            result.push_back(pair.second);
        }

        return result;
    }
};
