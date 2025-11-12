#include <iostream>
using namespace std;

int main() {
    int income,tax;
    cout<<"enter your income(in lakhs) ";
    cin>>income;
    if(income<=5){
        tax=income*0.2;
    }
    else if(income<=10){
        tax=income*0.3;

    }
    else{
        tax=income*0.5;

    }
    cout<<"your payable tax amount(in lakh) is "<<tax<<endl;



    return 0;
}