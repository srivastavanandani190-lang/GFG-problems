// User function Template for C++

int fibonacci(int n) {

    // Write your code here to calculate
    // to calculate the nth fibonacci number
    if(n<=2){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}