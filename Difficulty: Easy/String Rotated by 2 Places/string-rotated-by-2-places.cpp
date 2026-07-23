class Solution {
  public:
    void rotatecw(string &s) {
        char c = s[s.size() - 1];
        int index = s.size() - 2;
        while (index >= 0) {
            s[index + 1] = s[index];
            index--;
        }
        s[0] = c;
    }

    void rotateacw(string &s) {
        char c = s[0];
        int index = 1;
        while (index < s.size()) {
            s[index - 1] = s[index];
            index++;
        }
        s[s.size() - 1] = c;
    }

    bool isRotated(string& s1, string& s2) {
        if (s1.size() != s2.size()) {
            return false;
        }

        // Handle strings of length less than 2
        if (s1.size() < 2) {
            return s1 == s2;
        }

        string cw = s1;
        string acw = s1;

        rotatecw(cw);
        rotatecw(cw);
        if (cw == s2) {
            return true;
        }

        rotateacw(acw);
        rotateacw(acw);
        if (acw == s2) {
            return true;
        }

        // Return false if neither rotation matches s2
        return false;
    }
};