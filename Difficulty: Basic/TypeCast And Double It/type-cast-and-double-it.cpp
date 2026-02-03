#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    getline(cin, num);

    int n = stoi(num);   // convert string to int
    cout << n * 2;       // double and print

    return 0;
}

