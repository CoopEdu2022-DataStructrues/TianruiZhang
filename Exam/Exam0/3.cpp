#include<iostream>
using namespace std;
int main() {
    int n,x;
    cin >>n>>x;
    x%=n;
    int nums[n];
    for (int i=x;i<x+n;i++) {
        cin>>nums[i%n];

    }
    for (int i=0;i<n-1;i++) {
        cout<<nums[i]<<" ";
    }
    cout <<nums[n-1]<<'\n';
}