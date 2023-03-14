#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> s;
    unordered_map<int, int> m;
    for (int n : nums2) {
        while (!s.empty() && s.top() < n) {
            m[s.top()] = n;
            s.pop();
        }
        s.push(n);
    }
    vector<int> v;
    for (int n : nums1){
        v.push_back(m.count(n) ? m[n] : -1);
    }
    return v;
}

int main() {
    vector<int> a {1, 3, 2, 4};
    vector<int> b {2, 3, 4};
    for (auto n : nextGreaterElement(a, b)) {
        cout << n << ' ';
    }
    cout << endl;
}