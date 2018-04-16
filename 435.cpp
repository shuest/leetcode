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
     int start;	//��ʼ
      int end;
     Interval() : start(0), end(0) {}
      Interval(int s, int e) : start(s), end(e) {}
  };
	//bool compare ( const Interval &a,const Interval &b)
	//{
	//	if( a.start != b.start)
	//		return a.start < b.start;
	//	return a.end < b.end; //��С����
	//}
	//class Solution {
	//public:
	//	int eraseOverlapIntervals(vector<Interval>& intervals) {
	//		if(intervals.size()==0)
	//			return 0;

	//		//memo[i] ��ʾʹ��intervals[0...i]���乹�ɵ�����ص�������
	//		vector<int> memo(intervals.size(),1 );
	//		sort(intervals.begin(),intervals.end(),compare);
	//		for(int i=1; i<intervals.size(); i++)
	//		{
	//			for( int j=0; j < i; j++)
	//			{
	//				if( intervals[i].start >= intervals[j].end)	//��ǰһ��j��β���һ��i���ײ�ͬ
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
		return a.start < b.start; //��С����
	}
  //̰���㷨
	class Solution {
	public:
		int eraseOverlapIntervals(vector<Interval>& intervals) {
			if(intervals.size()==0)
				return 0;

			//memo[i] ��ʾʹ��intervals[0...i]���乹�ɵ�����ص�������
			vector<int> memo(intervals.size(),1 );
			sort(intervals.begin(),intervals.end(),compare);
			int res=1;//0��ȡ,��¼���ٲ�ͬ��
			int pre=0;
			for(int i=1;i<intervals.size();i++)
			{
				if(intervals[i].start >= intervals[pre].end)//��ͬ
				{
					res++;
					pre=i;
				}
			}
			return intervals.size()-res;//��ͬ��
		}
	};