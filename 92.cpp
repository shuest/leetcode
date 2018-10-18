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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(head == NULL || m == n)
			return head;
		ListNode *dummy_head = new ListNode(-1);
		dummy_head->next = head;
		m++;n++;
		int count = n - m;
		ListNode* p_m = dummy_head;
		ListNode* p_m_previous = dummy_head;
		while(m > 1) {
			p_m_previous = p_m;
			p_m = p_m->next;
			m--;
		}
		ListNode *p = p_m;
		ListNode *q = p_m->next;
		ListNode *r = q->next;
		while(count > 0) {
			q->next = p;
			p = q;
			q = r;
			if(r != NULL) r = r->next;
			ount--;
		}
		p_m_previous->next = p
	}
};