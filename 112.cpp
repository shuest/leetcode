
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
    bool hasPathSum(TreeNode* root, int sum) {
		if(root==NULL)
			return false;	//空节点找不到的
		if(root->left==NULL&&root->right==NULL)
			return root->val==sum;
		if(hasPathSum(root->left,sum-root->val))
			return true;
		if(hasPathSum(root->right,sum-root->val))
			return true;
		return false;
		
    }
};
