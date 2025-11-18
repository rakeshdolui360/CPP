#include <iostream>
using namespace std;
int sum(int a,int b){
    int s=a+b;
    return s;
}
double sum(double a,double b){
    int s=a+b;
    return s;
}
int sum(int a,int b,int c){
    int s=a+b+c;
    return s;
}


// double sum(int a,int b){
//     int s=a+b;
//     return s;
// }

//it will give error as sum(3,5) can be confused between   int sum(int a,int b) and  double sum(int a,int b).
// cannot overload functions distinguished by return type alone

int main() {
    //function overloading 
    //it depends only on different parameter of  functions having similar name 

    cout<<"sum is = "<<sum(3,5)<<endl;
    cout<<"sum is = "<<sum(3.5,5.5)<<endl;
    cout<<"sum is = "<<sum(3,5,3)<<endl;


    return 0;
}