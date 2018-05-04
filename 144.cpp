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
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
     TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

//class Solution {
//public:
//    vector<int> preorderTraversal(TreeNode* root) {
//		vector<int> res;
//        if(root==NULL)
//			return res;
//		stack<TreeNode*> s;
//		s.push(root);
//		
//		while(!s.empty())
//		{
//			TreeNode* t=s.top();
//			s.pop();
//			res.push_back(t->val);
//			if(t->right!=NULL)
//			{
//				s.push(t->right);
//			}
//			if(t->left!=NULL)
//				s.push(t->left);
//
//		}
//		return res;
//    }
//
//};
  struct Command{
	string s;	//go,print
	TreeNode *node;
	Command(string s,TreeNode* node):s(s),node(node){}
  };

 class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
		vector<int> res;
		if(root==NULL)
			return res;
		stack<Command> s;
		s.push(Command("go",root));
		while(!s.empty())
		{
			Command c=s.top();
			s.pop();
			if(c.s=="print")
				res.push_back(c.node->val);
			else 
			{
				if(c.node->right)
					s.push(Command("go",c.node->right));
				if(c.node->left)
					s.push(Command("go",c.node->left));
				s.push(Command("print",c.node));
			}
		}
		return res;
	}
 };