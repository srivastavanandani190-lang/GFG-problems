class Solution {
  public:
    string isPrime(int n) {

        bool flag=true;
        if(n==1){
            return "No";
        }
        
        for (int i = 2; i <= sqrt(n); i++) {
            if(n%i==0){
                flag=false;
                break;
            }
        else{
            flag=true;
        }
        }
        if(flag==true) return "Yes";
        return "No";
    }
};