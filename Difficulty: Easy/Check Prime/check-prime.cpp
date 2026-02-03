// User function Template for C++

bool prime(int n) {
    bool flag=true;
    if(n==1) return false;
    // Write your code here
    for(int i=2;i<=sqrt(n);i++){
    // returns a boolean value
    if(n%i==0){
        flag=false;
        break;
    }
    }
    if(flag==true) return true;
    return false;
    
}