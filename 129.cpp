

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
    int sumNumbers(TreeNode* root) {
        dfs(root);
		return res;
    }
private:
	int res=0;
	void dfs(TreeNode* root)
	{
		if(root ==NULL)
			return;
		if(root->left==NULL&&root->right==NULL)
		{
			res+=root->val;
			return;
		}
		if(root->left!=NULL)
		{
			root->left->val+=root->val*10;
			dfs(root->left);
		}
		if(root->right!=NULL)
		{
			root->right->val+=root->val*10;
			dfs(root->right);
		}
	}
};