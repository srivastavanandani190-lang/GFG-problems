class Solution {
    public int lastDigit(int n) {
        // Code here
         int res=n%10;
        if(n<0){
            return res*(-1);
        }
        
        return res;
    }
}