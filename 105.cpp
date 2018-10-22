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
	vector<int> pre,in;
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode * root;
		pre = preorder;in =  inorder;
		root = inOrder(0,pre.size() -1,0,in.size()-1);
		return root;
    }
	TreeNode *inOrder(int prel,int prer,int inl,int inr) {
		if(prel > prer)
			return NULL;
		TreeNode *root = new TreeNode(pre[prel]) ;
		int i;
		for(i =inl; i <= inr; i++) {
			if(in[i] == pre[prel])
				break;
		}
		root->left =inOrder(prel+1,i-1-inl+prel+1  ,inl,i-1);
		root->right = inOrder(i-inl+prel+1,prer,i+1,inr);
		return root;
	}
};