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
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
		sort(g.begin(),g.end(),greater<int>()); //�Ӵ�С
		sort(s.begin(),s.end(),greater<int>());
		int si=0,gi=0;
		int res=0;
		while(si<s.size()&&gi<g.size())
		{
			if(s[si]>=g[gi])
			{
				res++;
				si++;
				gi++;
			}
			else {
				gi++;
			}
		}
		return res;
    }
};