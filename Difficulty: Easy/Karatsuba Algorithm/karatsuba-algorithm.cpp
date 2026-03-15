class Solution {
  public:
  
    long long binaryToDecimal(string s){
        long long num = 0;
        
        for(int i = 0; i < s.length(); i++){
            num = num * 2 + (s[i] - '0');
        }
        
        return num;
    }
  
    long long karatsubaAlgo(string A, string B) {
        
        long long num1 = binaryToDecimal(A);
        long long num2 = binaryToDecimal(B);
        
        return num1 * num2;
    }
};