class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for (auto& word : strs) {
            int word_length = word.length();
            string encoded_word = to_string(word_length) + "#" + word;
            result += encoded_word;
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int jumping_value = 0;
        for (int x = 0; x < s.length();) {
            if (s[x] == '#') {
                result.push_back(s.substr(x + 1, jumping_value));
                x += jumping_value + 1;
                jumping_value = 0;
            }
            else {
                int num = s[x] - '0';
                jumping_value = static_cast<int>(num) + (jumping_value * 10);
                x++;
            }
        }

        return result;
    }
};
