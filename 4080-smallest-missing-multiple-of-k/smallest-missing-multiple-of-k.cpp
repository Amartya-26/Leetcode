class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();

        for(int i =1;i<=n+1;i++){
            int x = k*i;
            bool found = false;

            for(int num : nums){
                if(num == x){
                    found = true;
                    break;
                }
            }
            if(!found)
            return x;
        }
        return -1;
    }
};