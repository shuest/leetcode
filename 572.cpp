
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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(s == NULL && t == NULL) return true;
		if(s == NULL || t == NULL) return false;
		if(s->val == t->val && isSame(s,t)) return true;
		return isSubtree(s->left,t) || isSubtree(s->right,t);
	}
private:
	bool isSame(TreeNode *r,TreeNode *t) {
		if(r == NULL && t == NULL) return true;
		if(r == NULL || t == NULL || r->val != t->val)
			return false;
		return isSame(r->left,t->left) && isSame(r->right,t->right);
	}
};