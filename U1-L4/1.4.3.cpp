#include <iostream>
using namespace std;
int a(int b) {
    if (b==1 ||b==0){
        return b;
    } else {
        return (a(b-1)+a(b-2));
    }
};
int main() {
    int b=0,i=0;
    cin>>b;
    while (i<b) {
        cout<<a(i)<<endl;
        i++;
    }
}
