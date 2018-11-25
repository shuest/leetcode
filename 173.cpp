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
 


class BSTIterator {
public:
    BSTIterator(TreeNode *root) {
        inorder(root, q);
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
		if(!q.empty())
			return true;
		else return false;
    }

    /** @return the next smallest number */
    int next() {
		int t = q.front()->val;
		q.pop();
		return t;
    }
	void inorder(TreeNode *root,queue<TreeNode*> &q) {
		if(	root == NULL)
			return;

		if(root->left!= NULL) {
			inorder(root->left,q);
		}
		q.push(root);
		if(root->right!= NULL) {
			inorder(root->right,q);
		}
	}
private:
	queue<TreeNode*>q;
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */