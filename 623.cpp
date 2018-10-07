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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
		if(root == NULL) return NULL;
		if(d == 1){
			TreeNode *ans = new TreeNode(v);
			ans->left = root;
			return ans;
		}
		if(d == 2) {
			TreeNode * lf = new TreeNode(v);
			lf->left = root->left;
			lf->right = NULL;
			root->left = lf;

			TreeNode *rg = new TreeNode(v);
			rg->right = root->right;
			rg->left = NULL;
			root->right = rg;
			return root;
		}
		else {
			if(root->left != NULL) 
				addOneRow(root->left, v, d - 1);
			if(root->right != NULL) 
				addOneRow(root->right,v,d - 1);
		}
		return root;
    }
};