#include <iostream>

using namespace std;
int main(){
    system("chcp 65001");
    double a = 0,b=0,max=0;
    int c=0;
    cout <<"输入数字"<<endl;
    while (b!=-999){
        if (b==-999){
            break;
        }
        cin >>b;
        a=a+b;

        c=c+1;


        if (b>max||c==1){
            max=b;
        }
        cout<<a/c;


    }


    cout <<"最大数字"<<max<<"平均数"<<a/c<<endl;
}
