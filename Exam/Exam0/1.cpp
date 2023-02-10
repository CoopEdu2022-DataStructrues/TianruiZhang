#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int number=10,line=1;

    string h=" ";
    string o=" ";
    while (number>=(2*pow(line+1,2))-1){
        line=line+1;
    }
    for (int i=line;i<=0;i--){

        o.append(2*i-1,'*');



    }



}
