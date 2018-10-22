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
	TreeNode* mistake1;
	TreeNode* mistake2;
	TreeNode* pre;
    void recoverTree(TreeNode* root) {
        inorder(root);
		if(mistake1 != NULL && mistake2 != NULL)
			swap(mistake1->val,mistake2->val);
    }
	void inorder(TreeNode* root) {
		if(root == NULL)
			return ;
		if(root->left != NULL)
		{
			inorder(root->left);
		}
		if(pre != NULL&& pre->val > root->val) { //根那有第一个逆序
			if( mistake1 == NULL) { //第一次
				mistake1 = pre;
				mistake2 = root;
			}
			else {	//第二次
				mistake2 = root;
			}
		}
		pre = root;
		if(root->right != NULL) {
			inorder(root->right);
		}
	}
};