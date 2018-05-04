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
		int moveDistance=len-k%len;//���µ�ͷָ�롣
		//�Ǵ�ͷ�ƶ���Щ���������ͷָ��
		if(moveDistance==len) return head;
		for(int i=0;i<moveDistance-1;i++)//-1����ͷָ��֮ǰ��һ��ָ��
			newhead=newhead->next;
		ListNode *temp=newhead;//��ͷ֮ǰ��ָ��
		newhead=newhead->next;//��ͷָ��
		temp->next=NULL;//���β
		tail->next=head;//��β���
		return newhead;
    }
};