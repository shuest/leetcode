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
    vector<double> averageOfLevels(TreeNode* root) {
        dfs(root,0);
		vector<double> res;
		for(int i = 0; i <= maxLevel; i++) {
			res.push_back(1.0 * sum[i] / cnt[i]);
		}
		return res;
    }
private:
	long long sum[1000],cnt[1000];
	int maxLevel = 0;
	void dfs(TreeNode *root,int level) {
		if(root == NULL) return ;
		sum[level] += root->val;
		maxLevel = max(maxLevel,level);
		cnt[level]++;
		dfs(root->left,level+1);
		dfs(root->right,level+1);
	}
};