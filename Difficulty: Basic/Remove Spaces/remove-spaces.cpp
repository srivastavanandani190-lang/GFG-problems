class Solution {
  public:
    string removeSpaces(string &s) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        return s;
    }
};