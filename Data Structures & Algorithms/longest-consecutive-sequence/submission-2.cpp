class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());
        for (int x = 0; x < nums.size(); x++) {
            cout << nums[x] << " ";
        }

        int longest_seq = 1;
        int seq = 1;
        for (int x = 0; x < nums.size() - 1; x++) {
            int current_num = nums[x];
            int next_num = nums[x + 1];

            if (current_num == next_num - 1) {
                seq++;
            }
            else if (current_num == next_num) {
                continue;
            }
            else {
                longest_seq = max(seq, longest_seq);
                seq = 1;
            }
        }
        longest_seq = max(seq, longest_seq);

        return longest_seq;
    }
};
