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
#include<unordered_map>
using namespace std;


  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
			return 0;
		return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};