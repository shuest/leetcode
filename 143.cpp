
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
    void reorderList(ListNode* head) {
		ListNode *p=head,*a=head,*b=head;
		ListNode *mid=findMidNode(head);
		ListNode *q=reverseList(mid);
		while(p!=NULL&&q!=NULL)
		{
			a=p;b=q;
			p=p->next;q=q->next;
			a->next=b;b->next=p;
		}
		if(q!=NULL)
			b->next=q;
		}
	ListNode *findMidNode(ListNode *head)
	{
		ListNode *mid=head,*tail=head,*last=head;//last是mid之前的
		while(tail!=NULL&&tail->next!=NULL)
		{
			last=mid;
			mid=mid->next;
			tail=tail->next->next;
		}
		if(last!=NULL)
			last->next=NULL;
		//把mid之前的last作为尾，断链
		return mid;
	}
	ListNode *reverseList(ListNode *head)
	{
			if(head==NULL) return head;
			ListNode *cur=head,*pre=NULL,*temp=NULL;
			while(cur!=NULL)
			{
				temp=cur->next;
				cur->next=pre;
				pre=cur;
				cur=temp;
			}
			return pre;
			//cur为空时退出，最后一个元素是pre，
    }
};