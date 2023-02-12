#include <iostream>
#include <list>
using namespace std;
bool prime(int i){
    for (int k=2;k<i;k++){
        if (i%k== false){
            return false;
        }

    }
    return true;
}
int main(){
    list<int> primenumber = {};
    list<int> list_ = {};
    double number=10;

    for (int k=2;k<number;k++){
        if (prime(k)){
            primenumber.push_front(k);

        }
    }
    for (int i=2;i<primenumber.size();i++){
        list_.push_back(primenumber[i]-primenumber[i-1]);
    }
}