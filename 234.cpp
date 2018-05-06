

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
	ListNode* reverseList (ListNode *head)
	{
		if(head==NULL||head->next==NULL)
			return head;
		ListNode *l=head->next;
		ListNode *h;
		head->next=NULL;
		while(l!=NULL)
		{
			h=l->next;
			l->next=head;
			head=l;
			l=h;
		}
		return head;
	}

    bool isPalindrome(ListNode* head) {
		if(head==NULL||head->next==NULL)
			return true;
		ListNode *p,*q;
		p=head;
		q=head;
		while(q!=NULL&&q->next!=NULL)
		{
			p=p->next;
			q=q->next->next;
			//q走两步到尾，p指中间
		}
		p=reverseList(p);
		while(p!=NULL)
		{
			if(head->val!=p->val)
				return false;
			else
			{
				head=head->next;
				p=p->next;
			}
		}
		return true;
    }
};