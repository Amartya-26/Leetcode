class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();

        vector<int> ans(n);

        for(int i =0;i<n;i++){
            int mn = INT_MAX;
            for(int j =0;j<n;j++){
                if(s[j] ==c){
                    mn = min(mn,abs(i-j));
                }
            }
            ans[i] = mn;
        }

        return ans;
    }
};