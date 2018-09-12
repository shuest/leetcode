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
    TreeNode* convertBST(TreeNode* root) {
        dfs(root);
		return root;
    }
private:
	int sum = 0;
	void dfs(TreeNode *root) {
		if(root==NULL) return;
		if(root->right != NULL) dfs(root->right);
		sum += root->val;
		root->val = sum;
		if(root->left != NULL) dfs(root->left);
	}
};