#include <iostream>

using namespace std;

struct Array {
    int data[10000];
    int last = -1;
};

Array * InitArray(int *a = NULL, int size = 0) {
    Array *L = new Array;
    for (int i = 0; i < size; i++) {
        L->data[i] = *(a + i);
    }
    L->last = size - 1;
    return L;
}

void RemainRange(Array *L, int min, int max) {
    int i = 0;
    for (int j = 0; j <= L->last; j++) {
        if (L->data[j] > min && L->data[j] < max){
            continue;
        }
        L->data[i++] = L->data[j];
    }
    L->last = i - 1;
}

void PrintArray(Array *L) {
    for (int i = 0; i <= L->last; i++) {
        cout << L->data[i] << ' ';
    }
    cout << endl;
}

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Array *L = InitArray(a, sizeof(a) / sizeof(a[0]));
    RemainRange(L, 1, 9);
    PrintArray(L);
}



