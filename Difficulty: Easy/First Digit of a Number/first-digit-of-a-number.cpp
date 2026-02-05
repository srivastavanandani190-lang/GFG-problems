int firstDigit(int n) {
    // code here
 
    while(n>=10){
      
        n/=10;
    }
    return n;
}