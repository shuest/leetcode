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
 
  //逆置相加，再倒回来
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1,s2,s;
		while(l1 != NULL) {
			s1.push(l1->val);
			l1 = l1->next;
		}
		while(l2 != NULL) {
			s2.push(l2->val);
			l2 = l2->next;
		}
		int carry = 0;
		while(!s1.empty() || !s2.empty()) {
			int tempsum = carry;
			if(!s1.empty()) {
				tempsum += s1.top();
				s1.pop();
			}
			if(!s2.empty()) {
				tempsum += s2.top();
				s2.pop();
			}
			carry = 0;
			if(tempsum >= 10) {
				carry = 1;
				tempsum = tempsum - 10;
			}
			s.push(tempsum);
		}
		if(carry == 1)
			s.push(1);
		ListNode *result = new ListNode(0);
		ListNode *cur = result;
		while(!s.empty()) {
			int top = s.top();
			s.pop();
			ListNode *node = new ListNode(top);
			cur->next = node;
			cur = cur->next;
		}
		return result->next;
    }
};