class Solution {
  public:
    long long int countDigits(long long int a, long long int b) {
        // code here
        long long p=a*b;
        long long count=0;
        while(p!=0){
            count++;
            p/=10;
        }
        return count;
    }
};