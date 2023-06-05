#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// none of your business
#define null INT_MIN
TreeNode *vec_2_tree(vector<int> &nums);
vector<int> tree_2_vec(TreeNode *root);
void print_vec(vector<int> arr);
vector<vector<int>> tests{{1, 2, 3, null, 5, null, 4}, {1, null, 3}, {1, 2, 3, 6, 7, 4, 5, 8, 9, 10, 11}, {1, 2, 3, 6, 7, 4, 5, 8}, {2, null, 3, null, 4, null, 5, null, 6}, {3, 9, 20, null, null, 15, 7}, {1, 2, 3, 4, 5}, {1, 2, 3, null, null, 4, null, null, 5}, {1, null, 2, null, 3, null, 4, null, 5}, {1, 2, null, 3, null, 4, null, 5}, {1, 2, null, 3, null, 4, null, 5, null, 6, 7, null, null, null, 8}, {}, {1, null, 2, null, 3, null, 4, null, 5, null, 6, null, 7, null, 8}};
vector<vector<int>> answers{
    {1, 3, 4},
    {1, 3},
    {1, 3, 5, 11},
    {1, 3, 5, 8},
    {2, 3, 4, 5, 6},
    {3, 20, 7},
    {1, 3, 5},
    {1, 3, 4, 5},
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5, 7, 8},
    {},
    {1, 2, 3, 4, 5, 6, 7, 8},
};
// ····················

// ····················
// ····················
// ····················
// ····················
// ····················
vector<int> rightSideView(TreeNode *root)
{
  vector<int> res;
  TreeNode *p;
  std::queue<TreeNode *> q;
  int count = 0;
  q.push(root);
  while (!q.empty())
  {
    p = q.front();

    q.pop();

    // if (p->left) {
    //   q.push(p->left);

    // }

    // if (p->right) {
    //   q.push(p->right);
    // }
    if (p->left && p->right)
    {
      if (p->left){
        q.push(p->left);
      }
      if (p->right){
        q.push(p->right);
      }
        
      count+=1;
    } else if (p->left || p->right)
    {
      if (p->left){
        q.push(p->left);
      }
      if (p->right){
        q.push(p->right);
      }
      count+=2;
    }
    if (count%2==0)
    {
      res.push_back(p->val);
    }
  }
  return res;
}

int main()
{
  for (int i = 0; i < tests.size(); i++)
  {
    if (rightSideView(vec_2_tree(tests[i])) != answers[i])
    {
      cout << "wrong answer!" << endl;
      cout << "input: ";
      print_vec(tests[i]);
      cout << endl
           << "output: ";
      print_vec(rightSideView(vec_2_tree(tests[i])));
      cout << endl;
      cout << "expected: ";
      print_vec(answers[i]);
      cout << endl;
      return 0;
    };
  }
  cout << "Accepted!" << endl;
}

// none of your business
TreeNode *vec_2_tree(vector<int> &nums)
{
  if (nums.empty())
    return nullptr;
  queue<TreeNode *> q;
  TreeNode *root = new TreeNode(nums[0]);
  q.push(root);
  int i = 1;
  while (!q.empty() && i < nums.size())
  {
    TreeNode *cur = q.front();
    q.pop();
    if (i < nums.size() && nums[i] != null)
    {
      cur->left = new TreeNode(nums[i]);
      q.push(cur->left);
    }
    i++;
    if (i < nums.size() && nums[i] != null)
    {
      cur->right = new TreeNode(nums[i]);
      q.push(cur->right);
    }
    i++;
  }
  return root;
}

vector<int> tree_2_vec(TreeNode *root)
{
  vector<int> arr;
  if (root == NULL)
    return arr;
  queue<TreeNode *> q;
  q.push(root);
  while (!q.empty())
  {
    TreeNode *node = q.front();
    q.pop();
    arr.push_back(node->val);
    if (node->left != NULL)
      q.push(node->left);
    if (node->right != NULL)
      q.push(node->right);
  }
  return arr;
}

void print_vec(vector<int> arr)
{
  cout << "[";
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] != null)
      cout << arr[i];
    else
      cout << "null";
    if (i != arr.size() - 1)
      cout << ", ";
  }
  cout << "]";
}
// ····················