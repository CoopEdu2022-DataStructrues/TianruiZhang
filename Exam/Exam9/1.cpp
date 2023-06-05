#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
};

// none of your business
ListNode* vec_2_node(vector<int> arr);
vector<int> node_2_vec(ListNode *head);
void print_node(ListNode *head);
void print_vec(vector<int> arr);
vector<vector<vector<int>>> tests { { }, { {} }, { {1} }, { {1, 2, 3} }, { {1}, {2}, {3} }, { {1, 2}, {3, 4} }, { {1, 2, 3}, {4, 5, 6} }, { {1, 2}, {3, 5}, {4, 6} }, { {1, 2, 6}, {4, 5}, {3, 7, 8, 9} }, { {1, 2}, {4, 5, 6}, {7, 8, 9}, {3, 10, 11, 12} }, { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15} }, { {1, 2, 3, 4}, {5, 6}, {11}, {9}, {7, 8, 16, 17, 18}, {22, 23, 99, 101, 102, 200} } };
vector<vector<int>> answers { {}, {}, {1}, {1, 2, 3}, {1, 2, 3}, {1, 2, 3, 4}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 16, 17, 18, 22, 23, 99, 101, 102, 200} };
// ····················

// ····················
// ····················
// ····················
// ····················
// ····················
ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> heads;
        for (auto l:lists){
            while (l!=nullptr)
            {
                heads.push_back(l->val);
                l=l->next;
            }
            
            
        }
        sort(heads.begin(),heads.end());
        ListNode *p4=new ListNode();
        for (int i=0;i<heads.size();i++){
            p4->val=heads[i];
            p4=p4->next;
        }
        return p4;

    }
// ····················
// ····················
// ····················
// ····················
// ····················

int main() {
  for (int i = 0; i < tests.size(); i++) {
    vector<ListNode *> t;
    for (auto _ : tests[i]) t.push_back(vec_2_node(_));
    if (node_2_vec(mergeKLists(t)) != answers[i]) {
      cout << "wrong answer!" << endl;
      cout << "input: ";
      for (auto t : tests[i]) { print_vec(t); cout << " "; }
      cout << endl << "output: ";
      print_node(mergeKLists(t));
      cout << "expected: ";
      print_vec(answers[i]);
      cout << endl;
      return 0;
    }
  }
  cout << "Accepted!" << endl;
}


// none of your business
ListNode* vec_2_node(vector<int> arr) {
  ListNode *head = new ListNode;
  ListNode *p = head;
  for (auto n : arr) { p->next = new ListNode {n, nullptr}; p = p->next; }
  return head->next;
}

vector<int> node_2_vec(ListNode *head) {
  vector<int> arr;
  while (head) { arr.push_back(head->val); head = head->next; }
  return arr;
}

void print_node(ListNode *head) {
  ListNode *p = head;
  cout << '[';
  while (p) { cout << p->val; if (p->next) cout << ", "; p = p->next; }
  cout << ']' << endl;
}

void print_vec(vector<int> arr) {
  cout << "[";
  for (int i = 0; i < arr.size(); i++) { cout << arr[i]; if (i != arr.size() - 1) cout << ", "; }
  cout << "]";
}
// ····················
