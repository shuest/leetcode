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
    int findBottomLeftValue(TreeNode* root) {
		int result = root->val;
		queue<TreeNode*> q;
		q.push(root);
		while(!q.empty()) {
			int size = q.size();
			result = q.front()->val; //每次都是取第一个数的值
			while(size--) {
				TreeNode *temp = q.front();
				q.pop();
				if(temp->left != NULL)
					q.push(temp->left);
				if(temp->right != NULL)
					q.push(temp->right);
			}
		}
		return result;
    }

};