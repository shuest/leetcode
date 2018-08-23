#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>

using namespace std;


 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        return func(head,NULL);
    }
	TreeNode* func(ListNode* head,ListNode* tail)
	{
		ListNode *fast=head,*slow=head;
		if(head==tail)
			return NULL;
		while(fast!=tail&&fast->next!=tail)
		{
			fast=fast->next->next;
			slow=slow->next;
		}
		TreeNode *root=new TreeNode(slow->val);
		root->left=func(head,slow);
		root->right=func(slow->next,tail);
		return root;
	}
};