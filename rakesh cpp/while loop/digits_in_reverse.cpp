#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number ";
    cin>>n;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        cout<<lastdigit;
        n=n/10;        

    }

    return 0;
}