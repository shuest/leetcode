#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
using namespace std;



 struct ListNode {
      int val;
      ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };
 

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
		if(head == NULL || head->next == NULL)
			return head;
		ListNode ahead(0),bhead(0);
        ListNode *a,*b ;
		a = &ahead;
		b = &bhead;
		while(head != NULL) {
			if(head->val < x) {
				a->next = head;
				a = a->next;
			}
			else {
				b->next = head;
				b = b->next;
			}
			head = head->next;
		}
		a->next = bhead.next;
		b->next = NULL;
		return ahead.next;
    }
};