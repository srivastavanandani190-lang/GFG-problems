#include <iostream>
using namespace std;

//Position this line where user code will be pasted.
int main() {
    int a, n;
    cin >> a >> n;
    int r = 2;

    // code here
    int res=a*(pow(r,n-1));
    cout<<res;
    return 0;
}