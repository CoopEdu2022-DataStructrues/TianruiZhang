#include <iostream>
using namespace std;
int swap(int *a,int *b) {
    int *c = a;
    a = b;
    b = c;
    return 0;

}
int main() {
    int a=1,b=2,c=3;
    cin>>a>>b>>c;
    swap(a,b);
    swap(b,c);
    cout<<a<<b<<c;

};