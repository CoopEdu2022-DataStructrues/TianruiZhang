#include <iostream>
#include <stack>
#include <sstream>
#include <cmath>

using namespace std;

double evalPostFix(string token) {
    string ops = "+-*/^";
    stack<double> s;
    double a, b;
    stringstream s_(token);
    while (s_ >> token) {
        if (ops.find(token) == string::npos) {  // not operator
            s.push(stod(token));
        } else {
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();
            switch (token.back()) {
                case '+': s.push(b + a); break;
                case '-': s.push(b - a); break;
                case '*': s.push(b * a); break;
                case '/': s.push(b / a); break;
                case '^': s.push(exp(a * log(b))); break;  // faster than pow(b, a);
            }
        }
    }
    return s.top();
}

int main() {
    string expression = "3 4 + 5 * 6 -";
    // string expression = "3 4 ^";  // 3 ^ 4 = 81
    cout << evalPostFix(expression) << endl;
}