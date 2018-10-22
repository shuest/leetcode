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
		ListNode* dummyhead = new ListNode(-1);
		dummyhead->next = head;
		ListNode *p_m = dummyhead,*p_m_previous = dummyhead;
		int count = n - m;
		while(m>0) {
			p_m_previous = p_m;
			p_m = p_m->next;
			m--;
		}
		ListNode *p = p_m,*q = p_m->next,*r = q->next;
		while(count>0) {
			q->next = p;
			p = q;
			q = r;
			if(r !=NULL)
				r = r->next;
			count--;
		}
		p_m_previous->next = p;
		p_m->next = q;
		head = dummyhead->next;
		return head;
	}
};