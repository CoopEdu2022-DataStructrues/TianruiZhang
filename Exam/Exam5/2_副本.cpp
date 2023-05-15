#include <iostream>
#include <vector>
#include "algorithm"
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

ListNode* merge_3_sorted_list(ListNode *list1, ListNode *list2, ListNode *list3) {
  // here

  vector<int> n {};
  int count=0;
  ListNode *p1=list1;
  ListNode *p2=list2;
  ListNode *p3=list3;
  while (p3||p2||p1) {
      n.push_back(p1->next->val);
      p1->next;
      n.push_back(p2->next->val);
      p2->next;
      n.push_back(p3->next->val);
      p3->next;
      count++;
  };
  std::sort(n.begin(), n.end());
  ListNode *p4 = new ListNode();
  int count1=0;
  for (int i=0;i<n.size();i++){
      p4->next->val=n[count1];
      p4->next;
      count1++;

  };
    return p4;
}

int main() {
  ListNode *list1 = vec_2_node({1, 2, 3});
  ListNode *list2 = vec_2_node({1, 3, 4});
  ListNode *list3 = vec_2_node({1, 4, 5});
  ListNode *head = merge_3_sorted_list(list1, list2, list3);
  print_node(head);
}