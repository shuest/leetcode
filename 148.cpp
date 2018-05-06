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
 
class Solution {
public:
    ListNode* sortList(ListNode* head) {
		if(head==NULL||head->next==NULL)
			return head;
		ListNode *mid=getMid(head);
		ListNode *next=mid->next;
		mid->next=NULL;
		return merge(sortList(head),sortList(next));

    }
	ListNode *getMid(ListNode *head)
	{
		ListNode *fast=head;
		ListNode *slow=head;
		while(fast->next!=NULL&&fast->next->next!=NULL)
		{
			fast=fast->next->next;
			slow=slow->next;
		}
		return slow;
	}
	ListNode* merge(ListNode* a,ListNode *b)
	{
		ListNode *ans=new ListNode(0);
		ListNode *node=ans;
		while(a!=NULL&&b!=NULL)
		{
			if(a->val<b->val)
			{
				node->next=a;
				a=a->next;
			}else
			{
				node->next=b;
				b=b->next;
			}
			node=node->next;
		}
		node->next=(a==NULL)?b:a;
		return ans->next;
	}
};