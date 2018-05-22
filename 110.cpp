
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
    bool isBalanced(TreeNode* root) {
		if(root==NULL)
			return true;
		if(abs(getHeight(root->left)-getHeight(root->right))>1)
			return false;
		else return isBalanced(root->left)&&isBalanced(root->right);
    }
	int getHeight(TreeNode* root)
	{
		if(root==NULL)
			return 0;
		int l=getHeight(root->left);
		int r=getHeight(root->right);
		return l>r?l+1:r+1;
	}
};