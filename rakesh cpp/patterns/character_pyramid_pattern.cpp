#include <iostream>
using namespace std;

int main() {
    int n=4;
    // int num=1;
    // for(int i=1;i<=n;i++){

    //     for(int j=1;j<=i;j++){
    //         cout<<char(64+num);
    //         num=num+1;
    //     }
    //     cout<<endl;
    // }
    char ch='A';
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<ch; //cout<<ch++;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}