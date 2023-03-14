#include <iostream>
using namespace std;


template <class T>
struct Stack {
    T data;
    Stack<T> *next;
};

template <class T>
Stack<T> *InitStack(int maxsize) {
    Stack<T> *S = new Stack<T>;
    S->next = nullptr;
    return S;
}

// template <class T> bool IsFull(Stack<T> *S);

template <class T>
bool Push(Stack<T> *S, T x) {
    Stack<T> *tmp = new Stack<T>;
    tmp->data = x;
    tmp->next = S->next;
    S->next = tmp;
    return true;
}

template <class T>
bool IsEmpty(Stack<T> *S) {
    return (S->next == nullptr);
}

template <class T>
bool Pop(Stack<T> *S) {
    if (IsEmpty(S)) return false;  // empty stack
    Stack<T> *tmp = S->next;
    S->next = tmp->next;
    delete tmp;
    return true;
}

template <class T>
T Top(Stack<T> *S) {
    return S->next->data;
}


int main() {}