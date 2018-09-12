
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
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
		return ans;
    }
private:
	int ans = 0;
	int dfs(TreeNode *root) {
		if(root == NULL) return 0;
		int l = dfs(root->left),r = dfs(root->right);
		ans = max(ans,l+r);
		return max(l,r) + 1;
	}
};