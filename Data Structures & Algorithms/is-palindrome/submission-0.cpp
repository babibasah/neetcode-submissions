class Solution {
public:
    bool isPalindrome(string s) {
        string filtered_s;
        for (int x = 0; x < s.length(); x++) {
            char letter = s[x];
            if ((letter >= '0' && letter <= '9') || (letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {
                if (letter >= 'A' && letter <= 'Z') letter = letter + 32;
                filtered_s.push_back(letter);
            }
        }

        cout << filtered_s << endl;
        int left = 0;
        int right = filtered_s.length() - 1;
        while (left <= right) {
            if (filtered_s[left] != filtered_s[right]) return false;

            left++;
            right--;
        }

        return true;
    }
};
