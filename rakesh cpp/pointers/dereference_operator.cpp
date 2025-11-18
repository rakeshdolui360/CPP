#include <iostream>
using namespace std;

int main() {
    int a=10;
    int *ptr=&a;


    cout<<"address of variable 'a' is= "<< &a <<endl;
    cout<<"value of 'ptr' variable is = "<<ptr<<endl;

    //dereference operator

    //access value
    cout<<"value of variable 'a' is= "<<*(&a)<<endl;
    cout<<"value of variable 'a' is= "<<*ptr<<endl;

    //summary
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<*(&a)<<endl;


    //modify value
    *(&a)=15;
    cout<<"updated value of variable 'a' is = "<<a<<endl;
    *ptr=20;
    cout<<"updated value of variable 'a' is = "<<a;
    







    return 0;
}