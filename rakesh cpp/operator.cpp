#include<iostream>
using namespace std;
int main(){
    // arithmetic operator

    // binary operator
    int a=5;
    int b=3;
    cout<<"a+b = "<<(a+b)<<endl;
    cout<<"a-b = "<<(a-b)<<endl;
    cout<<"a*b = "<<(a*b)<<endl;
    cout<<"a/b = "<<(a/b)<<endl;
    cout<<"a%b = "<<(a%b)<<endl;

    // unary operator
    int c=3;
    // int d=++c;
    int d=c++;
    cout<<c<<endl;
    cout<<d<<endl;

    int e=4;
    int f=e--;
    // int e=--c;
    cout<<e<<endl;
    cout<<f<<endl;    





    // relational operator

    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;

    a=3;

    cout<<(a>=b) <<endl;
    cout<<(a<=b)<<endl;
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;

    b=5;

    // logical operator

    cout<<((a<b)&&(a!=b))<<endl;
    cout<<((a>b)||(a!=b))<<endl;
    cout<<(!(a!=b))<<endl;


    // assignment operator
    int g=10;
    cout<<(g+=5)<<endl;
    cout<<(g-=5)<<endl;
    cout<<(g*=5)<<endl;
    cout<<(g/=5)<<endl;











    return 0;
}