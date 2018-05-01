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
		//头结点
		ListNode *dummyHead=new ListNode(0);
		dummyHead->next=head;
		ListNode *p=head;
		while(p->next!=NULL)
		{	//p值不小于下一个，按顺序的
			if(p->val<=p->next->val)
				p=p->next;
			else{
				ListNode *temp=p->next;//temp对下一个点
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