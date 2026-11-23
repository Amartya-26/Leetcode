class Solution {
public:
    int secondHighest(string s) {
        unordered_map<int, int> mp;

        for (char c : s) {
            if (isdigit(c)) {
                mp[c - '0']++;
            }
        }

        int cnt = 0;

        for (int i = 9; i >= 0; i--) {
            if (mp[i] > 0) {
                cnt++;
                if (cnt == 2) {
                    return i;
                }
            }
        }
        return -1;
    }
};