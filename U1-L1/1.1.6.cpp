#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a=0,b=0,c=0,d=0,e=0;
    for (int i=1;i<10;i++){
        for (int k=0;k<10;k++){
            for (int p=0;p<10;p++){
                a=(pow(i,3)+ pow(k,3)+ pow(p,3));
                if ((i*100+k*10+p)==a){
                    cout<<a<<endl;
                }

            }
        }
    }
};
