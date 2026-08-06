class Solution {
public:
    void parenth(int n, int left, int right, vector<string>& ans, string &temp) {
        // Base case: stop when length reaches n (total characters)
        if (left + right == n) {
            ans.push_back(temp);
            return;
        }
        // We can add an opening bracket if we haven't reached n/2 opening brackets
        if (left < n / 2) {
            temp.push_back('(');
            parenth(n, left + 1, right, ans, temp);
            temp.pop_back();
        }
        // We can add a closing bracket if there are unmatched opening brackets
        if (right < left) {
            temp.push_back(')');
            parenth(n, left, right + 1, ans, temp);
            temp.pop_back();
        }
    }

    vector<string> generateParentheses(int n) {
        vector<string> ans;
        string temp;
        parenth(n, 0, 0, ans, temp);
        return ans;
    }
};