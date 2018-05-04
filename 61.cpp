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
    ListNode* rotateRight(ListNode* head, int k) {
		if(head==NULL||head->next==NULL)
			return head;
        ListNode* dummyHead=new ListNode(0);
		dummyHead->next=head;
		ListNode* p=head,*tail,*newhead=head;
		int len=0;
		while(p!=NULL)
		{
			if(p->next==NULL)
				tail=p;
			len++;
			p=p->next;
		}
		int moveDistance=len-k%len;//找新的头指针。
		//是从头移动这些距离的是新头指针
		if(moveDistance==len) return head;
		for(int i=0;i<moveDistance-1;i++)//-1是新头指针之前的一个指针
			newhead=newhead->next;
		ListNode *temp=newhead;//新头之前的指针
		newhead=newhead->next;//新头指针
		temp->next=NULL;//变成尾
		tail->next=head;//首尾相接
		return newhead;
    }
};