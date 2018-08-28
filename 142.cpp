
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
 
 //返回成环的元素
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
			return NULL;
		set<ListNode*> s;
		ListNode *p=head;
		int cnt=0;
		while(p->next!=NULL)
		{
			s.insert(p);
			if(cnt==s.size())
				return p;
			cnt=s.size();
			p=p->next;
		}
		return NULL;
    }
};