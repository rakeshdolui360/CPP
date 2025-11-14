#include <iostream>
using namespace std;

int main() {
 //stop
//  stop loop   when number is a multiple of 10

    int n;
    

    // do{
    //     cout<<"enter number ";
    //     cin>>n;
    //     if(n%10==0){
    //         cout<<"you have entered a number which is multiple of 10";
    //         break;
    //     }
    //     cout<<"not a multiple of 10"<<endl;

    // }while(true);

    while(true){
        cout<<"enter number ";
        cin>>n;
        if(n%10==0){
            cout<<"you have entered a number which is multiple of 10";
            break;
        }
        cout<<"not a multiple of 10"<<endl;

    }

    return 0;
}