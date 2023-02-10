#include <iostream>

using namespace std;
int main()

{
    system("chcp 65001");
    int a=0;
    int b=0;
    int c=0;
    cout <<"输入a,b,c"<<endl;
    cin >>a;
    cin >>b;
    cin >>c;
    if (a>b && a>c){
        cout <<"a大"<<endl;

    } else if (b>a && b>c){
        cout <<"b大"<<endl;
    } else if (c>a && c>b){
        cout <<"c大"<<endl;
    } else{
        cout <<"错误"<<endl;
    }




}