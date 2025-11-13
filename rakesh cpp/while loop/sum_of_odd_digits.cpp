#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"enter number ";
    cin>>n;
    int lastdigit;
    int sum=0;
    while(n>0){
        lastdigit=n%10;        
        if(lastdigit%2!=0){

        sum=sum+lastdigit;
        }

        n=n/10;

    }

    cout<<"sum of odd digits of given number is= "<<sum;



    return 0;
}
