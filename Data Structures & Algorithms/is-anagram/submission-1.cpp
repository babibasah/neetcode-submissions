class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> first_word;
        unordered_map<char, int> second_word;

        if (s.length() == t.length()) {
            for (int x = 0; x < s.length(); x++) {
                if (first_word.contains(s[x])) first_word[s[x]]++;
                else first_word[s[x]] = 1;

                if (second_word.contains(t[x])) second_word[t[x]]++;
                else second_word[t[x]] = 1;
            }
        }
        else {
            for (int x = 0; x < s.length(); x++) {
                if (first_word.contains(s[x])) first_word[s[x]]++;
                else first_word[s[x]] = 1;
            }
            for (int y = 0; y < t.length(); y++) {
                if (second_word.contains(t[y])) second_word[t[y]]++;
                else second_word[t[y]] = 1;
            }
        }

        if (first_word == second_word) return true;
        else return false;
    }
};
