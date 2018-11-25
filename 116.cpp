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


 struct TreeLinkNode {
   int val;
   TreeLinkNode *left, *right, *next;
  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 };
 

class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(root == NULL)
			return;
		if(root->left)
			root->left->next = root->right;
		if(root->right) 
			if(root->next != NULL)
				root->right->next = root->next->left;
			else root->right->next = NULL;
		connect(root->left);
		connect(root->right);
    }
};