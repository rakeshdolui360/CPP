#include <iostream>
using namespace std;

//passing arguments with pass by reference/address

//pass by reference using pointers

void changeA(int * ptr){
    *ptr=15;
    cout<<"change in original value of argument 'a' is ="<<*ptr<<endl;

}
void changePARAM(int * param){
    *param=20;
    cout<<"change in original value of argument 'a' is ="<<*param<<endl;

}

//pass by reference using reference variable


void changeB(int &c){
    c=15;
    cout<<"change in original value of argument 'b' is ="<<c<<endl;

}
void changePARAM(int &param){
    param=20;
    cout<<"change in original value of argument 'b' is ="<<param<<endl;

}  


int main() {

    //pass by reference using pointers
    int a=10;
    changeA(&a);
    cout<<"changed value of 'a' is= "<<a<<endl;
    changePARAM(&a);
    cout<<"changed value of 'a' is= "<<a<<endl;



    //pass by reference using reference variable
    int b=10;
    changeB(b);
    cout<<"changed value of 'b' is= "<<b<<endl;
    changePARAM(b);
    cout<<"changed value of 'b' is= "<<b;

    return 0;
}