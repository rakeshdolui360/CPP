#include <iostream>
using namespace std;

//passing arguments with pass by value
void changeA(int a){
    a=15;
    cout<<"change in copy of argument 'a' is ="<<a<<endl;

}
void changeB(int b){
    b=20;
    cout<<"change in copy of argument 'a' is ="<<b<<endl;

}




int main() {
    int a=10;
    changeA(a);
    changeB(a);

    cout<<"unchanged value of 'a' is= "<<a;



    return 0;
}