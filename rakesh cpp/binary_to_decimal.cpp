#include <iostream>
using namespace std;
void bintodec(int binnum){
    int n= binnum;
    int lastdigit;
    int decimal=0;
    int pow=1;//2^0
    while(n>0){
        lastdigit=n%10;
        decimal=decimal+lastdigit*pow;
        pow=pow*2;
        n=n/10;
    }
    cout<<"binary to decimal of "<< binnum<< " is ="<<decimal<<endl;

}
void dectobin(int decnum){
    int n= decnum;
    int lastdigit;
    int binary=0;
    int pow=1;//10^0
    while(n>0){
        lastdigit=n%2;
        binary=binary+lastdigit*pow;
        pow=pow*10;
        n=n/2;
    }
    cout<<"decimal  to binary of "<< decnum<< " is ="<<binary<<endl;

}





int main() {
    bintodec(101);
    dectobin(24);


    return 0;
}