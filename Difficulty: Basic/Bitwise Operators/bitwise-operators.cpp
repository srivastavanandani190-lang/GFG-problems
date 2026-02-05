#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int d,e,f,g;
    cin >> a >> b >> c;
    d=a^a;
    e=c^b;
    f=a&b;
    g=c|(a^a);
    e=~e;
    cout<<d<<" "<<e<<" "<<f<<" "<<g<<"\n";
    // perform bitwise operations here
        
    return 0;
}