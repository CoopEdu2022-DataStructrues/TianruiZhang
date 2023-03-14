#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int calPoints(vector<string>& operations) {
    stack<int> st;
    int res = 0, t;
    for (auto o : operations) {
        if (o == "+") {  // push (st[-1] + st[-2]) to st
            t = st.top();
            st.pop();
            t += st.top();
            st.push(t - st.top());
            st.push(t);
        } else if (o == "D") {
            st.push(2 * st.top());
        } else if (o == "C") {
            st.pop();
        } else {
            st.push(stoi(o));
        }
    }
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    return res;
}

int main() {
    vector<string> ops {"5", "-2", "4", "C", "D", "9", "+", "+"};
    cout << calPoints(ops) << endl;
}