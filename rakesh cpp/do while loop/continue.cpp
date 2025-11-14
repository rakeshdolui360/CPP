#include <iostream>
using namespace std;

int main() {
    // print number except multiple of 10
    int n;
    // do{
    //     cout<<"enter number ";
    //     cin>>n;
    //     if(n%10==0){
    //         continue;
    //     }
    //     cout<<"not a multiple of 10"<<endl;

    // }while(true);

    while(true){
        cout<<"enter number ";
        cin>>n;
        if(n%10==0){
            continue;
        }
        cout<<"not a multiple of 10"<<endl;        

    }




    return 0;
}