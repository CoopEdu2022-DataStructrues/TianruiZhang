#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double number = 0;
    cin>>number;
    bool result= true;
    for (int i=3;i<= ::sqrt(number);i++){
        if ((int)number%i==0) {
            result = false;
        }
    }
    if (!result){
        cout<<"不是";
    } else {
        cout<<"是";
    }
}
