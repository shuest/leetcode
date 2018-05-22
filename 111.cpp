#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<unordered_map>
using namespace std;

  struct TreeNode {
     int val;
      TreeNode *left;
    TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        if(root->left == NULL && root->right == NULL)
            return 1;
        if(root->left == NULL && root->right != NULL)
            return minDepth(root->right) + 1;
        if(root->right == NULL && root->left != NULL)
            return minDepth(root->left) + 1;
        if(root->left != NULL && root->right != NULL) {
            int leftdepth = minDepth(root->left);
            int rightdepth = minDepth(root->right);
            return leftdepth < rightdepth ? leftdepth + 1 : rightdepth + 1;
        }
    }
};