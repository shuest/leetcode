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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) 
			return NULL;
		if(root->val == val) return root;
		if(root->val > val) {
			if(root->left != NULL)
				return searchBST(root->left,val);
			else return NULL;
		} 
		else { 
			if(root->right != NULL)
				return  searchBST(root->right,val);
			else return NULL;
		}
			
		return NULL;
    }
	
};