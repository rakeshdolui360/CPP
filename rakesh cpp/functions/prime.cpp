#include <iostream>
using namespace std;

void isprime(int n){
    bool prime=true;
    if(n==1){
       prime=false; 
    }

    for(int i=2;i*i<=n;i++){
    if(n%i==0){
       prime= false;
       break;
    }
    }

  if(prime){
        cout<<" given number is  prime";
    }
    else{
        cout<<" given number is not prime";

    }       

}

int main() {

    isprime(13);


    return 0;
}