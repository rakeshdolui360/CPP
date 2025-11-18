#include <iostream>
using namespace std;
int sum(int a,int b){
    int s=a+b;
    return s;
}
int diff(int a,int b){
    int d=a-b;
    return d;
}
int prod(int a,int b){
    int p=a*b;
    return p;
}

int main() {

    cout<<"sum is = "<<sum(3,5)<<endl;
    cout<<"different is = "<<diff(3,5)<<endl;
    cout<<"product is = "<<prod(3,5)<<endl;

    return 0;
}
