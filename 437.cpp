

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
    int pathSum(TreeNode* root, int sum) {
        //rootΪ���ڵ�������У��Һ�Ϊsum��·��������·������
		if(root==NULL)
			return 0;
		int res = findPath(root,sum);
		res+=pathSum(root->left,sum);
		res+=pathSum(root->right,sum);
		return res;
    }
	int findPath(TreeNode *node,int num)
	{	//node���ڵ㣬�Ұ���Node��·������num,
		//����·������
		if(node==NULL)
			return 0;
		int res=0;
		if(node->val==num)
			res+=1;
		res+=findPath(node->left,num-node->val);
		res+=findPath(node->right,num-node->val);
		return res;
	}
};