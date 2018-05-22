

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
			return NULL;
		if(p->val<root->val&&q->val<root->val)
			return lowestCommonAncestor(root->left,p,q);
		if(p->val>root->val&&q->val>root->val)
			return lowestCommonAncestor(root->right,p,q);
		return root;
    }
};
