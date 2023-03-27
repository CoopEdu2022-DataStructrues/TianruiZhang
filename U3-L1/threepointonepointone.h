#include <iostream>
#include "stack"
#ifndef BINARYTREE_H
#define BINARYTREE_H
using namespace std;
template<class T>
struct TreeNode {
    T value;
    TreeNode<T> *left;
    TreeNode<T> *right;
};

template<class T>
void PreOrderTraversal(TreeNode<T> *BT) {
    if (BT) {
        std::cout << BT->value << std::endl;
        PreOrderTraversal(BT->left);
        PreOrderTraversal(BT->right);
    }
}

template<class T>
void InOrderTraversal(TreeNode<T> *BT) {
    if (BT) {
        PreOrderTraversal(BT->left);
        std::cout << BT->value << std::endl;
        PreOrderTraversal(BT->right);
    }
}

template<class T>
void AfterOrderTraversal(TreeNode<T> *BT) {
    if (BT) {
        PreOrderTraversal(BT->left);
        PreOrderTraversal(BT->right);
        std::cout << BT->value << std::endl;
    }
}

template<class T>
void PostOrderTraveral_NonRecursive(TreeNode<T> *BT) {
    TreeNode<T> *p=BT;
    stack<TreeNode<T>*> s;

}

#endif
