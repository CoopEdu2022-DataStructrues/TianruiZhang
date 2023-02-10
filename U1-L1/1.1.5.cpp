#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a=0,b=0;
    for (int i=0; i<64;i++){
        a=pow(2,i);

        b=b+a;


    }
    cout <<b;

}