
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
#include<cctype>
using namespace std;

 struct TreeNode {
      int val;
    TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
	 vector<vector<int>> res;
	vector<int> path;
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
       dfs(root,sum);
	   return res;
    }
	void dfs(TreeNode *root,int sum)
	{
		if(root==NULL) return ;
		if(root->val==sum&&root->left==NULL&&root->right==NULL)
		{
			path.push_back(root->val);
			res.push_back(path);
			path.pop_back();
			return ;
		}
		path.push_back(root->val);
		dfs(root->left,sum-root->val);
		dfs(root->right,sum-root->val);
		path.pop_back();
	}
};