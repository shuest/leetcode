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


 struct TreeLinkNode {
   int val;
  TreeLinkNode *left, *right, *next;
  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 };
 
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(root == NULL)
			return;
		TreeLinkNode *p = root->next;
		while(p) {
			if(p->left) { //�󲻿�����
				p = p->left;
				break;
			}
			if(p->right) { //����Ҳ�������
				p = p->right;
				break;
			}
			//���Ҷ��գ�����һ��
			p = p->next;
		}
		if(root->right) 
			root->right->next = p;
		if(root->left)
			if(root->right)
				root->left->next = root->right;
			else 
				root->left->next = p;
		connect(root->right);
		connect(root->left);
    }
};