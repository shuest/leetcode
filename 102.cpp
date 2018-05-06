
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > res;
		if(root==NULL)
			return res;
		queue<pair<TreeNode*,int> > q;
		q.push(make_pair(root,0));
		while(!q.empty())
		{
			TreeNode *node=q.front().first;
			int level=q.front().second;
			q.pop();
			//开始时，size是0，level也是0,res是空，要建一个在压进去
			if(level==res.size())//没有进入队列
				res.push_back(vector<int>());
			res[level].push_back(node->val);
			if(node->left)
				q.push(make_pair(node->left,level+1));
			if(node->right)
				q.push(make_pair(node->right,level+1));
		}
		return res;
    }
};