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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyHead =new ListNode (0);
		dummyHead->next=head;	//新建头结点
		ListNode *p=dummyHead;
		while(p->next&&p->next->next)
		{
			ListNode* node1=p->next;
			ListNode* node2=p->next->next;
			ListNode* next=node2->next;

			node2->next=node1;
			node1->next=next;
			p->next=node2;

			p=node1;
		}
		//删除头结点
		ListNode* retNode=dummyHead->next;
		delete dummyHead;
		return retNode;
    }
};