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
 
  //把每个点都插进来，看有没有重复的
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
			return false;
		set<ListNode*> s;
		ListNode *t;
		t=head;
		int cnt=0;
		while(t->next!=NULL)
		{
			s.insert(t);
			if(cnt==s.size())
				return true;
			cnt=s.size();
			t=t->next;
		}
		return false;
    }
};