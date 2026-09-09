class Solution {
  public:
    string firstRepChar(string s) {
        unordered_set<char> seen;
        string ans = "";

        for(char c : s) { // Fix 1: Change 'string c' to 'char c'
            if(seen.count(c)) {
                ans += c; 
                return ans; // Fix 2: Return immediately when the first duplicate is found
            }
            seen.insert(c);
        }

        return "-1"; // Return -1 if no characters repeat
    }
};