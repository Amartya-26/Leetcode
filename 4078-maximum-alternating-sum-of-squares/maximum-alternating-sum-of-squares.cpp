class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        for(int i =0;i<n;i++){
            nums[i] = abs(nums[i]);
        }

        sort(nums.begin(),nums.end());

        long  long  ans  =0;

        vector<int> even;
        vector<int> odd;

        for(int i =0;i<n/2;i++){
            even.push_back(nums[i]);
        }
        for(int  i = n-1;i>=n/2;i--){
            odd.push_back(nums[i]);
        }

        for(int i =0;i<even.size();i++){
            ans -=even[i]*even[i];
        }
        for(int i =0;i<odd.size();i++){
            ans +=odd[i]*odd[i];
        }
        return ans;


        
        
    }
};