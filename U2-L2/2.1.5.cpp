#include <iostream>
#include <vector>
using namespace std;
int _sort(vector<int>& nums, int val,int seize) {

    for (int i=0;i<seize;i++) {
        if (nums[i]==val) {
            nums[i]=nums[i+1];
        }
    }
}
int main() {}