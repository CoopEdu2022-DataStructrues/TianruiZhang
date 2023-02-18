#include <iostream>

using namespace std;

int main(){
    long long number;
    char lable;
    int line=1;
    cin >>number>>lable;

    while (number>=(2*((line+1)*(line+1)))-1){
        line+=1;
    }
    number-= 2*line*line-1;
    for (int i=line-1;i>-1;i--){
        for (int k=0;k<line-i-1;k++){
            cout <<" ";
        }
        for (int o=0;o<2*i+1;o++){
            cout <<lable;
        }
        cout <<endl;
    }
    for (int p=1;p<line;p++){
        for (int k=0;k<line-p-1;k++){
            cout <<" ";
        }
        for (int o=0;o<2*p+1;o++){
            cout <<lable;
        }
        cout <<endl;
    }

    cout<<number<<endl;

}
