#include <iostream>
using namespace std;

int main() {
    // code here
    int n;
    cin>>n;
    if(n==1){
        cout<<"False";
    }
    bool flag=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}
