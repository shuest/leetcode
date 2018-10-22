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
	vector<int> in;
    void flatten(TreeNode* root) {
		if(root== NULL)
			return;
        root = preorder(root);
		sort(in.begin(),in.end());
		root->val = in[0];
		for(int i = 1; i < in.size(); i++) {
			if(root->right!= NULL)
				root->right->val = in[i];
			else
				root->right = new TreeNode(in[i]);
			root->left = NULL;
			root = root->right;
		}
		

    }
	TreeNode * preorder(TreeNode * root) {
		if(root == NULL)
			return NULL;
		in.push_back(root->val);
		if(root->left!=NULL)
			root->left = preorder(root->left);
		if(root->right!=NULL)
			root->right = preorder(root->right);
		return root;
	}
};