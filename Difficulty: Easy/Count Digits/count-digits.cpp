class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int original = n;
        int count = 0;

        while (n != 0) {
            int d = n % 10;   // extract digit

            if (d != 0 && original % d == 0) {
                count++;
            }

            n /= 10;
        }
        return count;
    }
};
