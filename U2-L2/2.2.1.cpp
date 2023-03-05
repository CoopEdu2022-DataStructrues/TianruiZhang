#include <iostream>
using namespace std;
int main(){}



#define MAXSIZE 10000

template <class T>
struct ArrayList {
    T data[MAXSIZE];
    int last = -1;
};

template <class T>
ArrayList<T> * InitArrayList() {
    ArrayList<T> *L = new ArrayList<T>;
    return L;
}

// Initialize with array
template <class T>
ArrayList<T> * InitArrayList(T *a = NULL, int size = 0) {
    ArrayList<T> *L = new ArrayList<T>;
    for (int i = 0; i < size; i++) {
        L->data[i] = *(a + i);
    }
    L->last = size - 1;
    return L;
}

template <class T>
int Length(ArrayList<T> *L) {
    return L->last + 1;
}

template <class T>
bool Insert(ArrayList<T> *L, int i, int x) {  // i is index, not ith element
    if (L->last == MAXSIZE - 1) {
        return false;  // no empty space
    }
    if (i < 0 || i > L->last + 1) {
        return false;  // illegal position
    }
    for (int j = L->last; j != i; j--) {
        L->data[j+1] = L->data[j];
    }
    L->data[i] = x;
    L->last++;
    return true;
}  // O(n)

template <class T>
bool Append(ArrayList<T> *L, T x) {
    if (L->last == MAXSIZE - 1) {
        return false;  // no empty space
    }
    L->data[L->last++] = x;
    return true;
}

template <class T>
bool Delete(ArrayList<T> *L, int i) {  // i in index, not ith element
    int j;
    if (i < 0 || i > L->last) {
        return false;  // illegal position
    }
    for (j = i; j <= L->last; j++) {
        L->data[j] = L->data[j+1];
    }
    L->last--;
    return true;
}

template <class T>
void Clear(ArrayList<T> *L) {
    L->last = -1;
}

template <class T>
T FindByIndex(ArrayList<T> *L, int i) {
    return L->data[i];
}  // O(1)

template <class T>
int Find(ArrayList<T> *L, T x) {
    for (int i = 0; i <= L->last; i++) {
        if (L->data[i] == x) return i;
    }
    return -1;
}  // O(n)

