#include <iostream>
using namespace std;
int main(){}

template <class T>
struct ListNode {
    T value = 0;
    ListNode<T> *next = NULL;
};

template <class T>
ListNode<T> * InitLinkedList() {
    ListNode<T> *L = new ListNode<T>;
    return L;
}

template <class T>
int Length(ListNode<T> *L) {
    ListNode<T> *p = L;
    int count = 0;
    while (p) {
        p = p->next;
        count++;
    }
    return count;
}

template <class T>
bool Insert(ListNode<T> *L, T x, int i) {
    ListNode<T> *p = L;
    int count = 0;
    while (p && i) {
        p = p->next;
        i--;
    }
    if (!p) return false;
    ListNode<T> *tmp = new ListNode<T>;
    tmp->value = x;
    tmp->next = p->next;
    p->next = tmp;
    return true;
}

template <class T>
bool Delete(ListNode<T> *L, int i) {
    ListNode<T> *p = L;
    while (p && i) {
        p = p->next;
        i--;
    }
    if (!p) return false;  // illegal position
    ListNode<T> *tmp = new ListNode<T>;
    tmp = p->next;
    p->next = tmp->next;
    delete tmp;  // free memory
    return true;
}

template <class T>
int FindByIndex(ListNode<T> *L, int i) {
    ListNode<T> *p = L;
    while (p && i) {
        p = p->next;
        i--;
    }
    if (p) return p->value;
    return -1;
}  // O(n)

template <class T>
ListNode<T> * Find(ListNode<T> *L, T x) {
    ListNode<T> *p = L;
    while (p && p->value != x) {
        p = p->next;
    }
    return p;
}  // O(n)


