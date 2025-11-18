#include <iostream>
using namespace std;

int main() {
    int a=10;
    int *ptr;
    cout<<"value of 'ptr' variable is = "<<ptr<<endl; 
    //it's a gurbage value
    
    
    int *ptr2=NULL;
    cout<<"value of 'ptr' variable is = "<<ptr2<<endl;
    //dereference operator is not possible in this case
    // cout<<*ptr2<<endl;
    //it will give error

    //null pointer can be updated and dereferenciable
    ptr2=&a;
    cout<<*ptr2<<endl;



   

    return 0;
}