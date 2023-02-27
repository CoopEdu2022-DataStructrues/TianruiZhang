#include <iostream>
using namespace std;
#define MAXSIZE 1000

template <class T>
struct Arraylist {
    T data[MAXSIZE];
    int last;
};
template <class T>
Arraylist<T>*Init() {
    Arraylist<T> *L=new Arraylist<T>;
    return L;
};
template <class T>
T FindK(Arraylist<T>*L,int i) {
    return L ->data[i];
}
template <class T>
bool Insert(Arraylist<T>*L,int i,T X){
    int j;
    if (L->last==MAXSIZE-1) {
        cout <<"No"<<endl;
        return false;
    }
    if (i<1 ||i>L->last+2) {
        cout <<"illeagel position"<<endl;
        return false;
    }
    for (j=L->last;j!=i-1;j--) {
        L->data[j+1]=L->data[j];

    }
    L->data[i-1]=X;
    L->last++;
    return true;
}
template <class T>
int Find(Arraylist<T>*L,T X){
    int i=0;
    while (i<=L->last&&L->data[i]!=X) {
        i++;
    }
    if (i>L->last) return -1;
    return i;
}
template <class T>
bool  Delete (Arraylist<T> *L,int  i) {
    int j;
    if (i<1||i>L->last+1) {
        cout<<"illegal";
        return false;

    }
    for (j=i;j!=L->last;j++) {
        L->data[j-1]=L->data[j];
    }
    L->data[i-1]=i;
    L->last--;
    return true;
}
template <class T>
int Length(Arraylist<T>*L){
    return L->last+1;
}

template<class T>
int Append(Arraylist<T>*L,T X) {
    if (L->last==MAXSIZE-1) {
        cout<<"no space"<<endl;
        return false;
    }
    L->data[L->last++]=X;
    return true;
}

template<class T>
void Clear(Arraylist<T>*L) {
    L->last=-1;
}

int main() {

}