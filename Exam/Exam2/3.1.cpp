#include <iostream>
using namespace std;
int main(){

    int answer=0,tou=0,jiao=0,sum;
    cin>>tou>>jiao>>sum;
    if (((tou+jiao)/2)*2!=(tou+jiao)){
        cout<<"-1";
    }else{
        answer=(sum-4*tou)/2;
        if ((answer/2)*2!=answer){
            cout<<"-1";
        }
    }



}