class Solution {
  public:
    int factorial(int n) {
        // code here
        int fact=1;
        if(n==0 || n==1){
            return 1;
        }
        else{
            for(int i=1;i<=n;i++){
                fact*=i;
            }
        }
        return fact;
    }
};
