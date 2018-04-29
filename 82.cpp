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
			//ָ����һ��Ԫ�أ����ڿ��ǿյ�������ʲ���p->next
			return head;
		}
		else
		{
			while(p!=NULL&&p->val==head->val)
				//ֻҪ���滹�У��ظ���
				p=p->next;
			return deleteDuplicates(p);
		}
    }
};