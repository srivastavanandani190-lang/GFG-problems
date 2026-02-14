// User function Template for C++

int nFactorial(int n) {
    int ans = 1;
    
    if(n==0 || n==1){
        return 1;
    }
    // Write your code here
    for(int i=1;i<=n;i++){
        ans*=i;
    }

    return ans;
}