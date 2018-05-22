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
    vector<int> v;
	bool isValidBST(TreeNode *root)
	{
		if(root==NULL||(root->left==NULL&&root->right==NULL))
			return true;
			inorder(root);
		for(int i=1;i<v.size();i++)
			if(v[i]<=v[i-1]) return false;
		return true;
		
	}
	void inorder(TreeNode *root)
	{
		if(root==NULL)
			return ;
		inorder(root->left);
		v.push_back(root->val);
		inorder(root->right);
	}
};