#include <iostream>
using namespace std;

int main() {
    int marks;
    cout<<"enter your marks ";
    cin>>marks;
    if(marks>=90){
        cout<<"grade A ";
    }
    else if(marks>=70){
        cout<<"grade B ";

    }
    else if(marks>=40){
        cout<<"grade c ";

    }
    else{
        cout<<"grade D ";

    }    

    

    return 0;
}