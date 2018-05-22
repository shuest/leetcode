
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
    int countNodes(TreeNode* root) {
        if(root==NULL)
			return 0;
		TreeNode *l=root,*r=root;
		int cntLeft=0,cntRight=0;
		while(l!=NULL)
		{
			l=l->left;
			cntLeft++;
		}
		while(r!=NULL)
		{
			r=r->right;
			cntRight++;
		}
		if(cntLeft==cntRight)
			return pow(2,cntLeft)-1;
		return countNodes(root->left)+countNodes(root->right)+1;
    }
	
};

//int getdepth(TreeNode *root)
//	{
//		if(root==NULL)
//			return 0;
//		return getdepth(root->left)>getdepth(root->right)?getdepth(root->left)+1:getdepth(root->right)+1;
//	}