#include <iostream>
#include <list>

using namespace std;
int main() {
    int number = 0;
    cin>>number;
    int w = number * 2;

    string h = to_string(number);
    string j = to_string(w);
    list<char> u={};
    list<char> e={};

    for (int i=0;i<9;i++){
        u.push_back(h[i]);
        e.push_back(j[i]);

    }
    u.sort();
    e.sort();
    u.unique();
    e.unique();

    if (e==u){
        cout <<"yes";
    }else{
        cout <<"no";
    }

}