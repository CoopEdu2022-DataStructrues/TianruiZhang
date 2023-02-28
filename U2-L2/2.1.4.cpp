#include <iostream>
using namespace std;
int Search(int *a,int size,int target) {
    int l=0,r=size;
    while (1<=r) {
        int i=(l+r)/2;
        if (*(a+i)==target) {
            return i;
        }
        if (*(a+i)>target) {
            r=i-1;
        } else {
            return l;
        }
    }
}
int main() {}

