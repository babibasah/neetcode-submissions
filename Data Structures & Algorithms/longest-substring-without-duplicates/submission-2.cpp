class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> memo;
        int count = 0, result = 0;;
        int left = 0, right = 0;
        
        while (right < s.length()) {
            char l_letter = s[left];
            char r_letter = s[right];
            if (!memo.contains(r_letter)) {
                memo[r_letter]++;
                right++;
                count++;
                result = max(result, count);
            }
            else {
                while (memo.contains(r_letter)) {
                    memo.erase(s[left]);
                    left++;
                    count--;
                }
            }
        }

        return result;
    }
};
