#include <iostream>
#include <sstream>
#include <string>
#include <stack>
using namespace std;

int grade(string a){
    if (a=="("||a==")") {
        return 0;
    } else if (a=="*" || a=="/") {
        return 3;
    } else if (a=="+" || a=="-") {
        return 2;
    }
}

string zhi(string a){
    stack<string> st;
    stack<string> zifu;
    stringstream s_(a);
    string ops="+-*/()";
    while (s_>>a){
        if (ops.find(a) != string::npos) {
            if (zifu.empty()|| a=="("){
                zifu.push(a);
            } else if (zifu.top() != "("&& grade(zifu.top())<= grade(a) ){
                st.push(a);
            } else if (a==")") {
                while (zifu.top()!="(") {
                    st.push(zifu.top());
                    zifu.pop();

                }
                zifu.pop();
            } else if (grade(zifu.top())> grade(a)) {
                st.push(zifu.top());
                zifu.pop();
            }
        }
    }

}

int main() {

    string s0="1 + 2 + 3";




}