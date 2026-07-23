class Solution {
public:
    bool checkPangram(string& s) {
        vector<bool> alpha(26, false);
        
        for (char c : s) {
            if (isalpha(c)) {
                // Convert uppercase to lowercase and map 'a'-'z' to 0-25
                alpha[tolower(c) - 'a'] = true;
            }
        }
        
        for (bool present : alpha) {
            if (!present) {
                return false;
            }
        }
        
        return true;
    }
};