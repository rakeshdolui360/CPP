#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"enter your age ";
    cin>>age;
    char isadult=age>=18?'y':'n';
    cout<<isadult<<endl;

    int a,b;
    cout<<"enter the value of a ";
    cin>>a;
    cout<<"enter the value of b ";
    cin>>b;  
    int largest=a>b?a:b;
    cout<<"largest is "<<largest<<endl;




    return 0;
}