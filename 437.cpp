

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
    int pathSum(TreeNode* root, int sum) {
        //root为根节点二叉树中，找和为sum的路径，返回路径个数
		if(root==NULL)
			return 0;
		int res = findPath(root,sum);
		res+=pathSum(root->left,sum);
		res+=pathSum(root->right,sum);
		return res;
    }
	int findPath(TreeNode *node,int num)
	{	//node根节点，找包含Node的路径，和num,
		//返回路径个数
		if(node==NULL)
			return 0;
		int res=0;
		if(node->val==num)
			res+=1;
		res+=findPath(node->left,num-node->val);
		res+=findPath(node->right,num-node->val);
		return res;
	}
};