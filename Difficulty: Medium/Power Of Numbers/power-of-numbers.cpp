class Solution {
  public:
    int reverseExponentiation(int n) {
        int rev = 0;
        int temp = n;
        
        // Reverse the number
        while(temp > 0){
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        
        // Calculate power
        return pow(n, rev);
    }
};