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
        ListNode *p,*begin,*end;
		p = head;
		int temp = 1;
		while(p != NULL) {
			if(temp == m) 
				begin = p;
			if(temp == n) {
				end = p;
				break;
			}
			p = p->next;
			temp++;
		}
		ListNode node(0);
		node.next = begin;
		p = begin->next;
		while(p != end) {
			node.next = p->next;
			node.next = p;
			p = p->next;
		}
		p->next = end->next;
		begin->next = node.next;
		return head;
	}
	ListNode *reverse(ListNode* & begin,ListNode* & end) {
		ListNode dummy(0);
		ListNode *t; t = begin;
		while(t != end) {
			
		}
	}
};