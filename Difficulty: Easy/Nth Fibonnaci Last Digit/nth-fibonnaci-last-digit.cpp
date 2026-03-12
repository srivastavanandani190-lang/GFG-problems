class Solution {
  public:
    int fib(int N) {
        
        int a = 0;
        int b = 1;
        
        for(int i = 2; i <= N; i++){
            int c = (a + b) % 10;
            a = b;
            b = c;
        }
        
        if(N == 0) return 0;
        return b;
    }
};