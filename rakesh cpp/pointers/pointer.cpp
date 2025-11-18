#include <iostream>
using namespace std;

int main() {
    int a=10;
    int *ptr=&a;

    // int * ptr=&a;
    // int* ptr=&a;
    //same
 
    cout<<"address of variable 'a' is= "<< &a <<endl;
    cout<<"value of 'ptr' variable is = "<<ptr<<endl;

    float pi=3.14;
    float *ptr2=&pi;
    cout<<"address of variable 'pi' is= "<< &pi <<endl;
    cout<<"value of 'ptr2' variable is = "<<ptr2<<endl;

    //normal variable
    // int a=10;
    //pointer variable
    // int *ptr=&a;    

    //pointer to pointer variable
    int **pptr=&ptr;
    cout<<"address of variable 'ptr' is= "<< &ptr<<endl;
    cout<<"value of 'pptr' variable is = "<<pptr<<endl;
    

    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(ptr2)<<endl;
    cout<<sizeof(pptr)<<endl;

    return 0;
}