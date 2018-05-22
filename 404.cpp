
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
	int res=0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)
			return 0;
		dfs(root,false);
		return res;
    }
	void dfs(TreeNode *root,bool isLeft)
	{
		if(root->left==NULL&&root->right==NULL)
		{
			if(isLeft==true)
				res+=root->val;
			return ;
		}
		if(root->left!=NULL)
			dfs(root->left,true);
		if(root->right!=NULL)
			dfs(root->right,true);
	}
};