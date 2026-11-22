class Solution {
public:
    bool checkString(string s) {
        int n = s.size();

        if(s.contains("ba")){
            return false;
        }
        else {
            return true;
        }
        return false;
        
    }
};