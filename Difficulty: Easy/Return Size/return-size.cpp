#include <iostream>
using namespace std;

int main() {
    int x = 2;
    double y = 3.5;
    char z = 'g';

    // store the size of the variables into a, b, c variables;

    // printing the size of the variable x.
    int a=sizeof(x);
    int b=sizeof(y);
    int c=sizeof(z);
    cout << a << " " << b << " " << c << endl;
    return 0;
}