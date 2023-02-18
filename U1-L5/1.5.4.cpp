#include <iostream>
using namespace std;
int main(){
    system("chcp 65001");
    int a=0,b=0,c=0,*p=NULL,*p1=NULL,*p2=NULL;
    cin>>a>>b>>c;
    p=&a;
    p1=&b;
    p2=&c;
    if (*p>*p1 && *p>*p2){
        cout <<"a大"<<endl;
        if (*p1>*p2) {
            cout<<"c最小";
        } else {
            cout<<"b最小";
        }

    } else if (b>a && b>c){
        cout <<"b大"<<endl;
        if (*p>*p2) {
            cout<<"c最小";
        } else {
            cout<<"a最小";
        }
    } else if (c>a && c>b){
        cout <<"c大"<<endl;
        if (*p>*p1) {
            cout<<"b最小";
        } else {
            cout<<"a最小";
        }
    } else{
        cout <<"错误"<<endl;
    }
}