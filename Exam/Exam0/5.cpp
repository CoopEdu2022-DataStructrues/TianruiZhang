#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main() {
    string S[54],S_[5]={"S","H","C","D","J"},res[54];
    for (int i=0;i<54;i++) {
        S[i]=S_[i/13]+ to_string(i%13+1);
    }
    int n=0;
    cin>>n;
    int order[54];
    for (int i=0;i<54;i++) cin>>order[i];
    for (int i=0;i<n;i++){
        for (int j=0;j<54;j++) res[order[j]-1]=S[j];
        copy(begin(res), end(res), begin(S));
        for (int i=0;i<53;i++) cout<<res[i]<<' ';
        cout <<res[53]<<'\n';
        return 0;
    }
}