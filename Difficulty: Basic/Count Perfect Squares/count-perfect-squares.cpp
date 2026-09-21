class Solution {
  public:
    int countSquares(int n) {
        // code here
        int count=0;
        for(int i=1;i<sqrt(n);i++){
            if(i*i<n){
                count++;
            }
        }
        return count;
    }
};