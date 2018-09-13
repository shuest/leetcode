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
    int findTilt(TreeNode* root) {
        dfs(root);
		return ans;
    }
private:
	int ans = 0;
	int getSum(TreeNode *root) {
		if(root == NULL) return 0;
		int l = getSum(root->left), r = getSum(root->right);
		return root->val + l + r;
	}
	void dfs(TreeNode *root) {
		if(root == NULL) return;
		int l = getSum(root->left), r = getSum(root->right);
		ans += abs(l - r);
		dfs(root->left);
		dfs(root->right);
	}
};