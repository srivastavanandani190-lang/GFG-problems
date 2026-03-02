 class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        if (s1.length() != s2.length())
            return false;

        vector<int> last1(26, -1);
        vector<int> last2(26, -1);

        for (int i = 0; i < s1.length(); i++) {
            int c1 = s1[i] - 'a';
            int c2 = s2[i] - 'a';

            // If previous occurrence index doesn't match
            if (last1[c1] != last2[c2])
                return false;

            // Update last seen index
            last1[c1] = i;
            last2[c2] = i;
        }

        return true;
    }
};