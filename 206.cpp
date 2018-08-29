
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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
			return head;
		ListNode *cur=head,*pre=NULL,*temp=NULL;
		while(cur!=NULL)
		{
			temp=cur->next;
			cur->next=pre;
			pre=cur;
			cur=temp;
		}
		return pre;
    }
};