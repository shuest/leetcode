
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL)
			return true;
		else if(p==NULL||q==NULL)
			return false;
		if(p->val!=q->val)
			return false;
		else return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }
};