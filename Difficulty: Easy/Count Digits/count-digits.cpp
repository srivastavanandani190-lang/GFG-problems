#include <iostream>
using namespace std;

int main() {
    // code here
    int n;
    cin>>n;
    int count=0;
    while(n--){
        count++;
        n=n/10;
    }
    cout<<count;
    return 0;
}