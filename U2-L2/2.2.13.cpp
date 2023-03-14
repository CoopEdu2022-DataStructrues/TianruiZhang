#include "iostream"
#include "stack"
#include "unordered_map"

using namespace std;
bool is(string s) {
    stack<char> b;
    unordered_map<char, char> paren{{'(', ')'},
                                    {'[', ']'},
                                    {'{', '}'}};
    for (auto i: s) {
        if (i == '{' || i == '[' || i == '(') {
            b.push(i);
        } else {
            if (b.empty() or paren[b.top()] != i) {
                return false;
            };
            b.pop();
        };

    };
    return b.empty();
}
int main() {}