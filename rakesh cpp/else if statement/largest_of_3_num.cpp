#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"enter 3 unique value"<<endl;
    cout<<"enter the value of a ";
    cin>>a;
    cout<<"enter the value of b ";
    cin>>b;  
    cout<<"enter the value of c ";
    cin>>c;     
    if((a>b)&&(a>c)){
        cout<<"a is greatest";
    }
    else if(b>c){
        cout<<"b is greatest";

    }
    else{
        cout<<"c is greatest";

    }

    return 0;
}