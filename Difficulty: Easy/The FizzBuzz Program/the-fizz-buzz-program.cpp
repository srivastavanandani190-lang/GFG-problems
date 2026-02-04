#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    cin>>number;
    // Write your code here.
    if(number%3==0 && number%5!=0) cout<<"Fizz"<<"\n";
    else if(number%3==0 && number%5==0) cout<<"FizzBuzz"<<"\n";
    else if(number%5==0 && number%3!=0) cout<<"Buzz"<<"\n";
    else cout<<number<<"\n";
return 0;
}
