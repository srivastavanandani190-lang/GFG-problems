class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        int sum=0;
        int rem;
        while(n!=0){
            rem=n%10;
            sum+=rem;
            n=n/10;
        }
        return sum;
    }
};