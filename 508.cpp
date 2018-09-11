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
 
  //找出最大子树和
class Solution {
private:
	map<int,int> m;
public:
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> result;
		dfs(root);
		int maxn = 0;
		for(auto it = m.begin(); it != m.end(); it++) {
			maxn = max(maxn,it->second);
		}
		for(auto it = m.begin();it != m.end(); it++)
			if(it->second == maxn) 
				result.push_back(it->first);
		return result;

    }
	void dfs(TreeNode *root) {
		if(root == NULL) return;
		if(root->left != NULL) {
			dfs(root->left);
			root->val = root->val + root->left->val;
		}
		if(root->right != NULL) {
			dfs(root->right);
			root->val = root->val + root->right->val;
		}
		m[root->val]++;
	}
};