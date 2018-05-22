

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
using namespace std;




 struct TreeNode {
      int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
    bool func(TreeNode *left, TreeNode *right) {
        if(left == NULL && right == NULL)
            return true;
        if(left != NULL && right != NULL && left->val == right->val) {
            return func(left->left, right->right) && func(left->right, right->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        return func(root->left, root->right);
    }
};