#include<iostream>
using namespace std;
int main(){


    int age;
    cout<<"enter your age ";
    cin>>age;
    
    cout<<"your age is "<<age<<endl;


    // sum of a and b

    int a,b;
    cout<<"enter value of a ";
    cin>>a; 
    
    cout<<"enter value of b ";
    cin>>b; 
    
    int sum=a+b;
    cout<<"sum of a and b is = "<<sum<<endl;


    // avg of three numbers

    float sub1,sub2,sub3;
    cout<<"enter marks of sub1 ";
    cin>>sub1;
    cout<<"enter marks of sub2 ";
    cin>>sub2;    
    cout<<"enter marks of sub3 ";
    cin>>sub3;

    float avg=(sub1+sub2+sub3)/3;

    cout<<"avg marks is "<<avg<<endl;



    return 0;
}