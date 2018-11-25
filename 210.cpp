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

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
		vector<int> res;
		vector<vector<int> > graph(numCourses,vector<int>(0));
		vector<int> in(numCourses,0);
		for(auto it = prerequisites.begin(); it != prerequisites.end();it++) {
			int from = (*it).second;
			int to = (*it).first;
			graph[from].push_back(to);
			++in[to];
		}
		queue<int> q;
		for(int i = 0; i < numCourses; i++) {
			if(in[i] == 0) q.push(i);
		}
		while(!q.empty()) {
			int t = q.front();
			res.push_back(t);
			q.pop();
			for(int i = 0; i < graph[t].size(); i++) {
				int next = graph[t][i];
				--in[next];
				if(in[next] == 0)
					q.push(next);
			}
		}
		if(res.size() != numCourses)
				res.clear();
		return res;
    }
};