#include <iostream>
#include <cmath>
using namespace std;
int main(){
    system("chcp 65001");
    float a,b,c,d,e,check=0;
    cout <<"输入a,b,c"<< endl;
    cin >> a;
    cin >> b;
    cin >> c;
    check = b*b-4*a*c;
    if (check >0){
        d=((-b+sqrt(check))/(2*a));
        e=((-b-sqrt(check))/(2*a));
        cout <<"两个实根"<<d<<"和"<<e<<endl;
    } else if (check==0){
        d=-b/2*a;
        cout <<"实根是"<<d<<endl;
    } else{
        cout <<"没有实根"<< endl;
    }






}