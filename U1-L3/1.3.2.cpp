#include <iostream>
using namespace std;

int main(){
    long long sum=0;
    int name[3][3]={{100,100,100},{90,50,100},{60,70,80}};
    for (int i=0;i<3;i++){
        sum=name[i][0]+name[i][1]+name[i][2];
        cout<<sum<<endl;

    }
}