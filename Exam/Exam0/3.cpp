#include <iostream>
#include <string>
using namespace std;
int main(){
    int sum,walk;
    string sentence,first,second;

    cin>>sum>>walk;
    int g[sum];
    for (int i=1;i <sum+1;i++){
        g[i-1]=i;
    }


    for (int i = 0; i < walk; i++){
        first=sentence.substr(0, sum - 1);
        second = sentence[sum];

        sentence= second + first;
    }
    for (int u=0;u<sum;u++) {
        cout<<
    }
    cout<<sentence<<endl;
}
