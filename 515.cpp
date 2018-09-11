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

  //找每层最大值
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q;
		vector<int> result;
		if(root == NULL) 
			return result;
		q.push(root);
		while(!q.empty()) {
			int size = q.size();
			int maxn = INT_MIN;
			while(size--) {
				TreeNode *temp = q.front();
				q.pop();
				maxn = max(maxn,temp->val);
				if(temp->left != NULL)
					q.push(temp->left);
				if(temp->right != NULL)
					q.push(temp->right);
			}
			result.push_back(maxn);
		}
		return result;
    }
};