#include <iostream>
using namespace std;
bool prime(int k) {
    for (int i=2;i*i<=k;i++){
        if (k%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int j=0,o=2,sum=0;
    cin >>j;
    for (int i=2;i<=j;i++){
        if (prime(i)) {
            if (i-o==2){
                sum++;
            }
            o=i;
        }
    }
    cout <<sum<<endl;

}