#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<unordered_map>
using namespace std;


 struct ListNode {
     int val;
      ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
		if(lists.size()>2)
		{
			vector<ListNode*>l1(lists.size()/2);
			vector<ListNode*>l2(lists.size()-lists.size()/2);
			for(int i=0;i<lists.size();i++)
			{
				if(i<lists.size()/2)
					l1[i]=lists[i];
				else
					l2[i-lists.size()/2]=lists[i];
			}
			return mergeTwoLists(mergeKLists(l1),mergeKLists(l2));
		}
		else if(lists.size()==2)
			return mergeTwoLists(lists[0],lists[1]);
		else if(lists.size()==1)
			return lists[0];
		else return NULL;
    }
	ListNode* mergeTwoLists(ListNode *l1,ListNode *l2)
	{
		if(l1==NULL)
			return l2;
		if(l2==NULL)
			return l1;
		ListNode *l=NULL;
		if(l1->val>l2->val)
		{
			l=l2;
			l->next=mergeTwoLists(l1,l2->next);
		}
		else{
			l=l1;
			l->next=mergeTwoLists(l1->next,l2);
		}
		return l;
	}
};