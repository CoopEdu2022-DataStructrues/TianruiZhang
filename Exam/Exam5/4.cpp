#include "map"
#include <iostream>
#include "vector"
using namespace std;

bool lemonade_change(vector<int> bills) {
    map<int,int> n {{10,5},{20,5},{50,5},{100,5}};
    bool final= true;
    int more=0;
    // here
    for (int s:bills){
        if (s-10==0){
            continue;
        } else if ((s-10)%50!=0){
            n[50]=n[50]-(s-10)/50;
            more=(s-10)%50;
            if (more%20==0){
                if (n[20]>=2) {
                    n[20] = n[20] - more / 20;

                } else if (n[20]>=1){
                    n[20]=n[20]-more/20;
                    n[10]=n[10]-more/10;
                } else{
                    n[10]=n[10]-more/10;
                }

            }
        } else if ((s-10)%20!=0){
            n[20]=n[20]-(s-10)/20;
            more=(s-10)%20;
            if (more%20==0){
                if (n[20]>=2) {
                    n[20] = n[20] - more / 20;

                } else if (n[20]>=1){
                    n[20]=n[20]-more/20;
                    n[10]=n[10]-more/10;
                } else{
                    n[10]=n[10]-more/10;
                }

            }
        } else if ((s-10)%10!=0){
            n[10]=n[10]-(s-10)/10;
            more=(s-10)%10;
            if (more%20==0){
                if (n[20]>=2) {
                    n[20] = n[20] - more / 20;

                } else if (n[20]>=1){
                    n[20]=n[20]-more/20;
                    n[10]=n[10]-more/10;
                } else{
                    n[10]=n[10]-more/10;
                }

            }
        }
        for (auto u:n) {
            if (u<0){
                final= false;
            }
        }

        return final;
    }

}

int main() {
    cout << boolalpha << lemonade_change({10, 10, 10}) << endl;
}