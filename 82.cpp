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
       ListNode* dummyHead=new ListNode(0);
	   dummyHead->next=head;
	   map<int,int> mp;
	   ListNode *cur=dummyHead;
	   while(cur->next!=NULL)
	   {
		   mp[cur->next->val]++;
		   if(mp[cur->next->val]>=2)
		   {
			   ListNode *deleteNode=cur->next;
			   cur->next=deleteNode->next;
			   delete deleteNode;
		   }
	   }
	   ListNode *retNode=dummyHead->next;
	   delete dummyHead;
	   return retNode;
    }
};