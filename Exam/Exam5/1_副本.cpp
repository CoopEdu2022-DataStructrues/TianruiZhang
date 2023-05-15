#include <iostream>
#include <vector>
#include "unordered_map"
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
};

ListNode* vec_2_node(vector<int> arr) {
  ListNode *head = new ListNode;
  ListNode *p = head;
  for (auto n : arr) {
    p->next = new ListNode {n, nullptr};
    p = p->next;
  }
  return head->next;
}

void print_node(ListNode *head) {
  ListNode *p = head;
  cout << '[';
  while (p) {
    cout << p->val;
    if (p->next) {
      cout << ", ";
    }
    p = p->next;
  }
  cout << ']' << endl;
}

ListNode* insert_by_index(ListNode *head, vector<int> arr, vector<int> idx) {
  // here
    unordered_map<int,int> _;
    for (int i = 0; i < idx.size(); i++) {
        _.insert({idx[i],arr[i]});
    };
    int count =0;
    while (head){
        ListNode *p1=head;
        try {
            ListNode *p = p1->next;
            p1->next->val=_[count];
            p1->next->next=p;
        } catch () {
            head->next;
        }
        count++;

    }

}

int main() {
  ListNode *head = vec_2_node({1, 2, 3});
  vector<int> arr {4, 5, 6};
  vector<int> idx {3, 4, 5};
  head = insert_by_index(head, arr, idx);
  print_node(head);


}