

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
		if(root==NULL)
			return res;
		queue<pair<TreeNode*,int>>q;
		q.push(make_pair(root,0));
		while(!q.empty())
		{
			TreeNode* t=q.front().first;
			int level=q.front().second;
			q.pop();
			if(level==res.size())
				res.push_back(vector<int>());
			res[level].push_back(t->val);
			if(t->left!=NULL)
				q.push(make_pair(t->left,level+1));
			if(t->right!=NULL)
				q.push(make_pair(t->right,level+1));
		}
		reverse(res.begin(),res.end());
		return res;
    }
	
};