
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
	vector<int> in,post;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        in = inorder,post = postorder;
		TreeNode *root = inOrder(0,in.size() -1,0,post.size() - 1);
		return root;
    }
	TreeNode *inOrder(int inl,int inr,int postl,int postr) {
		if(inl > inr)
			return NULL;
		int i;
		for(i = inl; i <= inr;i++) {
			if(in[i] == post[postr])
				break;
		}
		TreeNode *root = new TreeNode(post[postr]);
		root->left = inOrder(inl,i - 1,postl,i-1-inl+postl);
		root->right = inOrder(i+1,inr,i-1-inl+postl+1,postr-1);
		return root;
	}
};