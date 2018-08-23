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


 struct Interval {
      int start;
    int end;
    Interval() : start(0), end(0) {}
     Interval(int s, int e) : start(s), end(e) {}
  };
 
class Solution {
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
		auto it =intervals.begin();
		while(it!=intervals.end()&&newInterval.start>it->start)
			it++;
		intervals.insert(it,newInterval);
		//merge
		vector<Interval> ans;
		for(auto i=intervals.begin();i!=intervals.end();i++)
		{
			if(ans.empty()||(*i).start>ans.back().end) //原来大,不需要动
				ans.push_back(*i);
			else
				ans.back().end=max(ans.back().end,(*i).end);
		}
		return ans;
    }
};