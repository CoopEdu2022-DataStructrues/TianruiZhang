#include <iostream>
#include <string>
#include <list>
#include <algorithm>


using namespace std;
int main() {
    string s;
    cin>>s;
    string state="Yes";
    long long num= stoi(s);
    num*=2;
    string o= to_string(num);
    for (unsigned int i=0;i<o.length();i++) {
        if (s.find(o[i])== string::npos) {
            state="No";
        }

    }
    for (unsigned int i=0;i<s.length();i++) {
        if (o.find(s[i])== string::npos) {
            state="No";
        }

    }
    cout<<state<<endl<<o;


}



