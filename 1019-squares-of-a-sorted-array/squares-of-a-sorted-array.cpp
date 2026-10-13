class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        for(int&x : nums){
            x = x*x;
        }
        sort(nums.begin(),nums.end());

        
        return nums;

    }
};