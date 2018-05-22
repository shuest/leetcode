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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
			return NULL;
		invertTree(root->left);
		invertTree(root->right);
		swap(root->left,root->right);
		return root;
    }
};