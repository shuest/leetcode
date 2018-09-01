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
private:
	ListNode *head;
	int len;
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head) {
		this->head = head;
		len = 1;
		while(head->next != NULL) {
			head = head->next;
			len++;
		}
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        ListNode *node = head;
		int cnt = rand() % len;
		while(cnt--) {
			node = node->next;
		}
		return node->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */