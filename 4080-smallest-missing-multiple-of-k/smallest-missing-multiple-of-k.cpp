class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_set<int> st;

        for (int x : nums) {
            st.insert(x);
        }

        for (int i = 1;; i++) {
            int x = k * i;

            if (st.find(x) == st.end()) {
                return x;
            }
        }
    }
};