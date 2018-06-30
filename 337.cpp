#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<bitset>
using namespace std;



 struct TreeNode {
      int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
    int rob(TreeNode* root) {
        if(root==NULL)
			return 0;
		int val=root->val;
		int ll=root->left?rob(root->left->left):0;
		int lr=root->left?rob(root->left->right):0;
		int rl=root->right?rob(root->right->left):0;
		int rr=root->right?rob(root->right->right):0;
		return max(val+ll+lr+rl+rr,rob(root->right)+rob(root->left));
    }
};