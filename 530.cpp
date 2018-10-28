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
	vector<int> num;
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
		int res = 99999;
		for(int i = 0; i < num.size(); i++) {
			for(int j = i + 1; j < num.size(); j++) 
				if(abs(num[j] - num[i])<res)
					res = abs(num[j] - num[i]);
		}
		return res;
    }
	void inorder(TreeNode *root) {
		if(root == NULL)
			return ;
		if(root->left != NULL) 
			 inorder(root->left);
		 num.push_back(root->val);
		if(root->right != NULL)
			inorder(root->right);
		
	}
};