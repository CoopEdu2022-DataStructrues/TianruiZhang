#include <iostream>
using namespace std;

template<class T>
struct Stack {
    T *data;
    T top;
    int max_size;
};

template<class T>
Stack<T> *InitStack(int max_size) {
    Stack<T> *S =new Stack<T>;
    S->data = new T[max_size];
    S->top = -1;
    S->max_size = max_size;
    return S;
}

template<class T>
bool IsFull(Stack<T>*S) {
    return (S->top == S->max_size -1);
}

template<class T>
bool Push(Stack<T> *S, T x) {
    if (IsFull(S)) return false;
    S->data[++(S->top)] = x;
    return true;
}

template<class T>
bool IsEmpty(Stack<T> *S) {
    return (S->top == -1);
}

template<class T>
bool Pop(Stack<T> *S) {
    if (IsEmpty(S)) return false;
    S->top--;
    return true;
}

template<class T>
T Top(Stack<T> *S) {
    return S->data[S->top]
}
int main() {}