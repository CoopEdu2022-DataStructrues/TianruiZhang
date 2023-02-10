#include <iostream>
using namespace std;
int main(){
    system("chcp 65001");
    double a,b,c=0;
    cout <<"输入a,b,c"<<endl;
    cin >>a;
    cin >>b;
    cin >>c;
    if (a>b && a>c){

        if ((b+c)>a){
            cout <<"可以"<<endl;
        }else{
            cout <<"不可以"<<endl;
        }

    } else if (b>a && b>c){
        if ((c+a)>b){
            cout <<"可以"<<endl;
        }else{
            cout <<"不可以"<<endl;
        }
    } else if (c>a && c>b){
        if ((b+a)>c){
            cout <<"可以"<<endl;
        }else{
            cout <<"不可以"<<endl;
        }
    } else{
        cout <<"错误"<<endl;
    }

}
