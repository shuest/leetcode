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
    ListNode* deleteDuplicates(ListNode* head) {
		if(head==NULL||head->next==NULL)
			return head;
		ListNode *p=head;
		while(p!=NULL&&p->next!=NULL)
		{
			while(p->next!=NULL&&p->next->val==p->val)
				p->next=p->next->next;
			p=p->next;
		}
		return head;
    }
};