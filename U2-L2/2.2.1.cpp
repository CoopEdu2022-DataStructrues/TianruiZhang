#include <iostream>
using namespace std;
int main(){}

template <class T> struct Arraylist {};
template <class T> ArrayList<T> * InitArray();
template <class T> int Length(ArrayList<T> *L);
template <class T> bool Insert(ArrayList<T> *L, int i, int x);
template <class T> bool Delete(ArrayList<T> *L, int i);
template <class T> T Find(ArrayList<T> *L, int i);