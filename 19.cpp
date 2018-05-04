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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyHead=new ListNode(0);
		dummyHead->next=head;

		ListNode* p=dummyHead;
		ListNode* q=dummyHead;
		for(int i=0;i<n+1;i++)
		{
			q=q->next;
		}
		while(q!=NULL)
		{
			p=p->next;
			q=q->next;
		}
		ListNode* delNode=p->next;
		p->next=delNode->next;
		delete delNode;
		return dummyHead->next;
    }
};