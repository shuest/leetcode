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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
		return build(0,nums.size() - 1, nums);
    }
 private:
	TreeNode *build (int l ,int r, vector<int> &nums) {
		if(l > r) return NULL;
		int index = l;
		for(int i = l + 1; i <= r; i++) {
			if(nums[i] > nums[index])
				index = i;
		}
		TreeNode * root = new TreeNode(nums[index]);
		root->left = build(l,index - 1,nums);
		root->right = build(index + 1, r,nums);
		return root;
	}
};