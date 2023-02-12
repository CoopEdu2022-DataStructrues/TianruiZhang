#include <iostream>

using namespace std;

int main(){
    long long number=19;
    int line=1;


    while (number>=(2*((line+1)*(line+1)))-1){
        line+=1;
    }
    number-= 2*line*line-1;
    for (int i=line;i>-1;i--){
        for (int k=0;k<line-i;k++){
            cout <<" ";
        }
        for (int o=0;o<2*i+1;o++){
            cout <<"*";
        }
        cout <<endl;
    }
    for (int p=1;p<line+1;p++){
        for (int k=0;k<line-p;k++){
            cout <<" ";
        }
        for (int o=0;o<2*p+1;o++){
            cout <<"*";
        }
        cout <<endl;
    }

    cout<<number<<endl;

}
