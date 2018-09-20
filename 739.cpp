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
    vector<int> dailyTemperatures(vector<int>& temperatures) {
		vector<int> res(temperatures.size());
		stack<pair<int, int>> s;
		int len = temperatures.size();
		for(int i = 0; i < len; i++) {
			while( !s.empty() && temperatures[i] > s.top().first) {
					res[s.top().second] = i - s.top().second;
					s.pop();
			}
			s.push(pair<int,int>(temperatures[i],i));
		}
		return res;
    }
};