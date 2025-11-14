#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cout<<"enter number ";
    cin>>n;
    bool isprime=true;
    // for(int i=2;i<=n-1;i++){
    //     if(n%i==0){
    //         isprime=false;
    //         break;
    //     }
    // }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }    


        if(isprime==true){
            cout<<" a prime number";
        }
        else{
            cout<<" not  a prime number";
        }
    


    return 0;
}
