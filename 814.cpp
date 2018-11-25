#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
  class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
		if(root == NULL)
			return NULL;
		root->left = pruneTree(root->left);
		root->right = pruneTree(root->right);
		if(root->val == 0 && root->left == NULL && root->right == NULL)
			root = NULL;
		return root;
    }
};