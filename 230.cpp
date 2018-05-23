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
	vector<int> nums;
    int kthSmallest(TreeNode* root, int k) {
		if(root==NULL||nums.size()>=k)
			return nums[k-1];
		if(root->left!=NULL)
			kthSmallest(root->left,k);
		nums.push_back(root->val);
		if(root->right!=NULL)
			kthSmallest(root->right,k);
		return nums[k-1];
    }
};