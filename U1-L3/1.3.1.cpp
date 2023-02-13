#include <iostream>
using namespace std;
int main(){
    int list[10]={1,2,3,4,5,6,7,8,9,10};
    double a=0;
    for (int k=0;k<10;k++){
        for (int i=0;i<10;i++){
            if (list[i]>list[i+1]){
                a=list[i+1];
                list[i+1]=list[i];
                list[i]=a;

            }
        }
    }


}
