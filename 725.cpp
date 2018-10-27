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
public:
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
		int cnt = 0;
		vector<ListNode*>res(k);
		for(ListNode *t = root; t != NULL; t= t->next) {
			cnt++;
		}
		int avg = cnt / k,ext = cnt % k;
		//每个子链有avg个，ext有多余节点的子链个数
		for(int i = 0; i < k && root; i++) {
			res[i] = root;
			for(int j = 1; j < avg + (i < ext);j++) {
				root = root->next;
			}
			ListNode *t = root->next;
			root->next = NULL;
			root = t;
		}
		return res;
	}
}; 