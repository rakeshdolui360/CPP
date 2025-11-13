#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"enter a number ";
    cin>>n;
    int lastdigit;
    int num=0;
    while(n>0){
        lastdigit=n%10;
        num=num*10+lastdigit;
        n=n/10;
    }
    cout<<"reversed number is "<<num;


    return 0;
}