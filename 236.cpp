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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
			return root;
		if(root==p||root==q)	//有一个是根
			return root;
		TreeNode *left =lowestCommonAncestor(root->left,p,q);
		TreeNode *right = lowestCommonAncestor(root->right,p,q);
		if(left!=NULL&&right!=NULL)
			return root;
		else return left!=NULL?left:right;
    }
};