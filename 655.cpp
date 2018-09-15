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
    vector<vector<string>> printTree(TreeNode* root) {
        int h = height(root);
		int c = pow(2,h) - 1;
		vector<vector<string>> ans(h,vector<string>(c));
		dfs(root, 0, c - 1, 0, ans);
		return ans;
    }
private:
	int height(TreeNode * root) {
		if(root == NULL) return 0;
		return max(height(root->left),height(root->right)) + 1;
	}
	void dfs(TreeNode *root,int l ,int r, int h,vector<vector<string>> &ans) {
		if(root == NULL) return;
		if(l > r) return;
		int mid = (l + r) / 2;
		ans[h][mid] = to_string(root->val);
		dfs(root->left,l,mid - 1,h + 1, ans);
		dfs(root->right, mid + 1, r, h + 1,ans);
	}
};