#include <iostream>
using namespace std;

int main() {

    // implicit conversion

    cout<<(10/3)<<endl;
    cout<<(10/3.0)<<endl;
    cout<<('a'+1)<<endl;
    cout<<('A'+1)<<endl;

    // explicit conversion
    cout<<(10/(float)3)<<endl;
    cout<<((float)10/3)<<endl;

    cout<<(10/(int)3.0)<<endl;
    cout<<((int)10/3.0)<<endl;

    float pi=3.14;
    cout<<(int) pi<<endl;
    cout<<(int) 'a'<<endl;
    cout<<(char)('a'+1)<<endl;
    cout<<(char)('A'+1)<<endl;

    cout<<(bool)1+2<<endl;
    cout<<(bool)0+2<<endl;
    cout<<(bool)(1+2)<<endl;

    cout<<(23.5+2+'A')<<endl;






    return 0;
}