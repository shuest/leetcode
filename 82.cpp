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
		ListNode* p=head->next;
		if(p->val!=head->val)
		{
			head->next=deleteDuplicates(p);
			//指向下一个元素，由于考虑空的情况，故不用p->next
			return head;
		}
		else
		{
			while(p!=NULL&&p->val==head->val)
				//只要后面还有，重复的
				p=p->next;
			return deleteDuplicates(p);
		}
    }
};