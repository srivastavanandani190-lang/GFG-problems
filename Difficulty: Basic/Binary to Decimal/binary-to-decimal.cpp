class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int decimal = 0;

        for (char bit : b) {
            decimal = decimal * 2 + (bit - '0');
        }

        return decimal;
    }
};
 