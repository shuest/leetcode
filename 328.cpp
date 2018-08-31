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
 
  //奇数都在偶数前面
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL) return head;
		ListNode *odd = head, *even = head->next,*evenHead = head->next;
		while(even != NULL && even->next != NULL) {
			odd->next = odd->next->next;
			even->next = even->next->next;
			odd = odd->next;
			even = even->next;
		}
		odd->next = evenHead;
		return head;
    }
};