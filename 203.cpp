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
    ListNode* removeElements(ListNode* head, int val) {
		ListNode* dummyHead=new ListNode(0);
		dummyHead->next=head;
		//while(head!=NULL&&head->val==val)
		//{
		//	//ɾ��ͷ�ڵ�,���ܺö�ͷ�ڵ㶼��.�յ�ɾ����
		//	ListNode* deleteNode=head;
		//	head=deleteNode->next;
		//	delete deleteNode;
		//}
		//if(head==NULL)
		//	return NULL;
		ListNode* cur =dummyHead;
		while(cur->next !=NULL)
		{
			if(cur->next->val==val)
			{
				//ɾ��cur->next;
				ListNode* deleteNode=cur->next;
				cur->next=deleteNode->next;
				delete deleteNode;

			}
			else cur=cur->next;
		}
		ListNode* retNode=dummyHead->next;
		delete dummyHead;
		return retNode;
    }
};