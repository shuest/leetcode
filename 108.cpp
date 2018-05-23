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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
		return func(nums,0,nums.size()-1);
    }
	TreeNode *func(vector<int>& nums,int left,int right)
	{
		if(left>right)	return NULL;
		int mid=(left+right)/2;
		TreeNode *root=new TreeNode(nums[mid]);
		root->left=func(nums,left,mid-1);
		root->right=func(nums,mid+1,right);
		return root;
	}
};