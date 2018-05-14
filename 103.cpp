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
 /*
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
		if(root==NULL)
			return res;
		queue<pair<TreeNode*,int>>q;
		q.push(make_pair(root,0));
		while(!q.empty())
		{
			TreeNode *t=q.front().first;
			int level=q.front().second;
			if(level==res.size())
				res.push_back(vector<int>());
			res[level].push_back(t->val);
			if(t->left!=NULL)
				q.push(make_pair(t->left,level+1));
			if(t->right!=NULL)
				q.push(make_pair(t->right,level+1));
		}
		for(int i=0;i<res.size();i++)
		{
			if(i%2==1)
				reverse(res[i].begin(),res[i].end());
		}
		return res;
    }
};*/
 class Solution{
 public:
	 vector<vector<int>> zigzagLevelOrder(TreeNode *root)
	 {
		vector<int> row;
		vector<vector<int>> v;
		queue<TreeNode*> q;
		if(root==NULL)
			return v;
		q.push(root);
		TreeNode *temp;
		int level=0;
		while(!q.empty())
		{
			int size=q.size();	//下一行所有元素数
			while(size--)
			{
				temp=q.front();
				q.pop();
				row.push_back(temp->val);
				if(temp->left!=NULL)
					q.push(temp->left);
				if(temp->right!=NULL)
					q.push(temp->right);
			}
			if(level%2==1)	//奇数行 逆置
			{
				int n=row.size();
				for(int i=0;i<n/2;i++)
					swap(row[i],row[n-i-1]);
			}
			v.push_back(row);
			level++;
			row.clear();
		}
		return v;
	 }

 };