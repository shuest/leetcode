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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1!=NULL&&l2!=NULL)
		{
			ListNode *p=l1;
			ListNode *q=l2;
			ListNode *t,*h;//t新链表，h头指针
			//初始表
			if(p->val>q->val)
			{
				t=q;
				h=q;
				q=q->next;
			}
			else{
				t=p;h=p;
				p=p->next;
			}
			while(p!=NULL&&q!=NULL)
			{
				if(p->val>q->val)
				{
					t->next=q;
					t=t->next;//都是改后挪
					q=q->next;
				}
				else
				{
					t->next=p;
					t=t->next;
					p=p->next;
				}
			}
			while(p!=NULL&&q==NULL)
			{
				t->next=p;
				p=p->next;
				t=t->next;
			}
			while(p==NULL&&q!=NULL)
			{
				t->next=q;
				q=q->next;
				t=t->next;
			}
			while(p==NULL&&q==NULL)
			{
				return h;
			}
			
		}
		if(l1==NULL&&l2!=NULL)
		{
			return l2;
		}
		if(l1!=NULL&&l2==NULL)
		{
			return l1;
		}
		if(l1==NULL&&l2==NULL)
			return NULL;
    }
};