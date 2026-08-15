class Solution {
  public:
    bool isSubSeq(string& s, string& t) {
        // code here
        int i = 0, j = 0;

                while (i < s.size() && j < t.size()) {
                    if (s[i] == t[j]) {
                        i++;
                    }
                    j++;
                }

                if (i == s.size()) {
            return true;
        } else {
            return false;
        }
    }
};