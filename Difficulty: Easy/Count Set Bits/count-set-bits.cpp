class Solution {
  public:
    int setBits(int n) {
        // Code here
          bitset<32> b(n);
        string s = b.to_string();
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                count++;
            }
        }
        return count;
    }
};