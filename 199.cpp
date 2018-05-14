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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res,level;
		if(root == NULL)
            return res;
		queue<TreeNode*> q;
		q.push(root);
		TreeNode *temp;
		while(!q.empty())
		{
			int size=q.size();
			while(size--)
			{
				temp=q.front();
				q.pop();
				if(temp->left!=NULL)
					q.push(temp->left);
				if(temp->right!=NULL)
					q.push(temp->right);
			}
			res.push_back(temp->val);
			
		}
		return res;
    }
};