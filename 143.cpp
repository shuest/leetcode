
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
		ListNode *mid=head,*tail=head,*last=head;//last��mid֮ǰ��
		while(tail!=NULL&&tail->next!=NULL)
		{
			last=mid;
			mid=mid->next;
			tail=tail->next->next;
		}
		if(last!=NULL)
			last->next=NULL;
		//��mid֮ǰ��last��Ϊβ������
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
			//curΪ��ʱ�˳������һ��Ԫ����pre��
    }
};