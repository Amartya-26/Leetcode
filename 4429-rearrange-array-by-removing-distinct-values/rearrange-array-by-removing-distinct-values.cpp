
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }

        while (ans.size() < n) {
            for (int i = 0; i < n; i++) {
                if (i > 0 && nums[i] == nums[i - 1])
                    continue;

                if (freq[nums[i]] > 0) {
                    ans.push_back(nums[i]);
                    freq[nums[i]]--;
                }
            }
        }

        return ans;
    }
};
