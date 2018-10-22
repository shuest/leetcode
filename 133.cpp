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


  struct UndirectedGraphNode {
      int label;
     vector<UndirectedGraphNode *> neighbors;
      UndirectedGraphNode(int x) : label(x) {};
  };
class Solution {
public:
	map<UndirectedGraphNode*,UndirectedGraphNode*> mp;
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        if(node == NULL)
			return NULL;
		if(mp.find(node) != mp.end())
			return mp[node];
		UndirectedGraphNode * cloneNode = new UndirectedGraphNode(node->label);
		mp[node] = cloneNode;
		for(int i = 0; i < node->neighbors.size(); i++) {
			UndirectedGraphNode *temp = cloneGraph(node->neighbors[i]);
			if(temp != NULL)
				cloneNode->neighbors.push_back(temp);
		}
		return cloneNode;
	}
};