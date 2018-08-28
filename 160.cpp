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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		if(headA==NULL||headB==NULL)
			return NULL;
		int lenA=getlength(headA);
		int lenB=getlength(headB);
		ListNode *p,*q;
		p=headA;
		q=headB;
		if(lenA>lenB) //A长就把A往后缩
			p=func(headA,lenA-lenB);
		if(lenA<lenB)
			q=func(headB,lenB-lenA);
		while(p!=q&&p!=NULL&&q!=NULL) //不相等的话就都往后挪
		{
			p=p->next;
			q=q->next;
		}
		return p;
    }
	int getlength(ListNode *a)
	{
		int len=0;
		while(a!=NULL)
		{
			len++;
			a=a->next;
		}
		return len;
	}

	ListNode *func(ListNode *a,int movelen)
	{
		while(movelen--)
			a=a->next;
		return a;
	}
};