#include <iostream>
using namespace std;

//default parameter
int sum(int a,int b=1){
    int s=a+b;
    return s;
}


//first parameter can not be default parameter

// int diff(int a=1,int b){
//     int d=a-b;
//     return d;
// }

int prod(int a,int b=1){
    int p=a*b;
    return p;
}
void sayhello();

int main() {

    cout<<"sum is = "<<sum(3)<<endl;


    // cout<<"different is = "<<diff(3)<<endl;
    //it will give error as first parameter can not be default parameter


    //if two argument is given then 2nd argument will replace default parameter value
    cout<<"product is = "<<prod(3,5)<<endl;


    //forward declaration means a function has to be declared before  function calling of that function,
    // but the actual code (definition) can appear later
    sayhello();


    return 0;
}
void sayhello(){
    cout<<"hello rakesh \n";
}