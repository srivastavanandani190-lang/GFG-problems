class Solution {
public:
    string reverseWords(string &s) {
        deque<string> ans;
        string word = "";

        // Extract words separated by '.'
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '.') {
                word += s[i];
            } else if (!word.empty()) {
                ans.push_front(word); // Push to front to reverse order
                word = "";
            }
        }

        // Push the final word if present
        if (!word.empty()) {
            ans.push_front(word);
        }

        // Reconstruct the result with '.' as separator
        string result = "";
        for (int i = 0; i < ans.size(); i++) {
            result += ans[i];
            if (i < ans.size() - 1) {
                result += ".";
            }
        }

        return result;
    }
};