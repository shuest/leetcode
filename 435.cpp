#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<device_launch_parameters.h>
using namespace std;
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
  struct Interval {
     int start;	//起始
      int end;
     Interval() : start(0), end(0) {}
      Interval(int s, int e) : start(s), end(e) {}
  };
	//bool compare ( const Interval &a,const Interval &b)
	//{
	//	if( a.start != b.start)
	//		return a.start < b.start;
	//	return a.end < b.end; //从小到大
	//}
	//class Solution {
	//public:
	//	int eraseOverlapIntervals(vector<Interval>& intervals) {
	//		if(intervals.size()==0)
	//			return 0;

	//		//memo[i] 表示使用intervals[0...i]区间构成的最长不重叠子序列
	//		vector<int> memo(intervals.size(),1 );
	//		sort(intervals.begin(),intervals.end(),compare);
	//		for(int i=1; i<intervals.size(); i++)
	//		{
	//			for( int j=0; j < i; j++)
	//			{
	//				if( intervals[i].start >= intervals[j].end)	//即前一个j的尾与后一个i的首不同
	//					memo[i]=max(memo[i],1+memo[j]);
	//			}
	//		}
	//		int res=0;
	//		for(int i=0;i<memo.size();i++)
	//		{
	//			res=max(res,memo[i]);
	//		}
	//		return intervals.size()-res;
	//	}
	//};
  bool compare ( const Interval &a,const Interval &b)
	{
		if( a.end != b.end)
			return a.end < b.end;
		return a.start < b.start; //从小到大
	}
  //贪心算法
	class Solution {
	public:
		int eraseOverlapIntervals(vector<Interval>& intervals) {
			if(intervals.size()==0)
				return 0;

			//memo[i] 表示使用intervals[0...i]区间构成的最长不重叠子序列
			vector<int> memo(intervals.size(),1 );
			sort(intervals.begin(),intervals.end(),compare);
			int res=1;//0号取,记录多少不同的
			int pre=0;
			for(int i=1;i<intervals.size();i++)
			{
				if(intervals[i].start >= intervals[pre].end)//不同
				{
					res++;
					pre=i;
				}
			}
			return intervals.size()-res;//相同的
		}
	};