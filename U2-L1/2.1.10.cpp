#include <iostream>
using namespace std;
int score2search(int object,int a[]) {
    int x=object;
    int middle=sizeof(a)/sizeof(a[0])/2;
    int u=middle;

    while (true){
        if (a[u]<x){
            u=u-1;

        } else if (a[u]>x){
            u=u+1;
        } else if (a[u]==x){
            return 1;
        } else if (u<1){
            return -1;
        }

    }

}
int main(){

}
//最快的时间复杂度4因为直接就找到了，那个数就在中间