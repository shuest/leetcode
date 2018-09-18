

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
    int findSecondMinimumValue(TreeNode* root) {
		dfs(root);
		if(s.size() == 1) return -1;
		else {
			auto it = s.begin();it++;
			return *it;
		}
    }
	set<int> s;
	void dfs(TreeNode *root) {
		if(root == NULL) return ;
		s.insert(root->val);
		if(root->left != NULL) dfs(root->left);
		if(root->right != NULL) dfs(root->right);
	}
};