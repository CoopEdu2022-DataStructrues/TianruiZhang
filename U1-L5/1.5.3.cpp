#include <iostream>
using namespace std;
int main(){
    int a;
    int *p;
    int **w;
    cin>>a;
    p=&a;
    cout<<p<<endl;
    w=&p;
    cout<<**w;
}