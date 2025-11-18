#include <iostream>
using namespace std;

void isprime(int n){
    bool prime=true;

    int i;
    for(i=2;i*i<=n;i++){
    if(n%i==0){
       prime= false;
       break;
    }
    }

    if(prime){
        cout<<n<<" ";
    }    

}

void rangeprime(int n){

    for(int i=2;i<=n;i++){
       isprime(i);
    }
}


int main() {

    rangeprime(30);


    return 0;
}