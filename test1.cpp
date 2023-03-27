#include <iostream>
#include "stack"
#include "vector"
template<class T>
struct TreeNode {
    T value;
    TreeNode<T> *left;
    TreeNode<T> *right;
};

using namespace std;

template<class T>
int find(TreeNode<T> *BT) {
    TreeNode<T> *p=BT;
    stack<TreeNode<T>> alldata;
    while (p||!alldata.empty()) {
        while (p) {
            alldata.push(p);
            p=p->left;
        }
        p=alldata.top();
        cout<<p->value;
        alldata.pop();
        p=p->right;
    }

}
int main() {


}