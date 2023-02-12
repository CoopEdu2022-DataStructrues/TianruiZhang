#include <iostream>
#include <string>
using namespace std;
int main(){
    string sentence = "1234567";
    string frist;
    string second;

    for (int i = 0; i < 3; i++){
        frist=sentence.substr(0,7-1);
        second = sentence[6];
        sentence=second+frist;
    }
    cout<<sentence<<endl;
}
