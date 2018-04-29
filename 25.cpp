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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
		//少于2个原序
		if(head==NULL||head->next==NULL||k<2)
			return head;
		for(int i=0;i<k;i++)
		{
			if(temp)
				temp=temp->next;
			else return head;
			//不够k个就原序
		}
		ListNode* prev=NULL,*cur=head,*next=NULL;
		while(cur!=temp)	//不是尾
		{
			next=cur->next;
			if(prev)
				cur->next=prev;
			else
				cur->next=reverseKGroup(temp,k);
			prev=cur;
			cur=next;
		}
		return prev;
	}
};