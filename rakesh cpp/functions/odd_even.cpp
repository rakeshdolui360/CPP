#include <iostream>
using namespace std;
void check(int n){
    if(n%2==0){
        cout<<" given number is even";
    }
    else{
        cout<<" given number is odd";

    }

}
bool iseven(int n){
    if(n%2==0){
       return true;
    }
    else{
       return false;
    }

}
int main() {
    check(7);
    cout<<endl;
    cout<<iseven(7);//if output 1 then number is even otherwise number is odd


    return 0;
}