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
    ListNode* insertionSortList(ListNode* head) {
		if(head==NULL||head->next==NULL)
			return head;
		//ͷ���
		ListNode *dummyHead=new ListNode(0);
		dummyHead->next=head;
		ListNode *p=head;
		while(p->next!=NULL)
		{	//pֵ��С����һ������˳���
			if(p->val<=p->next->val)
				p=p->next;
			else{
				ListNode *temp=p->next;//temp����һ����
				ListNode *q=dummyHead;
				p->next=p->next->next;
				while(q->next->val<temp->val)
					q=q->next;
				temp->next=q->next;
				q->next=temp;

			}
		}
		return dummyHead->next;
    }
};