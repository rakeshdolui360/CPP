#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    // boolean data type 
    bool adult=true;
    bool married=false;
    cout<<adult<<endl;
    cout<<married<<endl;

    cout<<"size of bool="<<sizeof(bool)<<endl;     
     // char data type
    char grade='a';
    char usd='$';
    cout<<"size of char ="<<sizeof(char)<<endl;

    // integer data type
    int age=20;
    int marks=35;

    cout<<"size of int ="<<sizeof(int)<<endl;

    // float data type
    float mark=56.78;
    float price=56.4334;
    cout<<"size of float ="<<sizeof(float)<<endl;

    // double data type
    double percentage=98.99;
    cout<<"size of double ="<<sizeof(double)<<endl;


    float pi=3.141592653589793;
    double pi2=3.141592653589793;

    // by default precision is set upto 5
    cout<<pi<<endl;
    cout<<pi2<<endl;

    // now here, some error will come in case of pi value(float)
    cout<<setprecision(12)<<pi<<endl;
    cout<<setprecision(12)<<pi2<<endl;


















    return 0;
}