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

  struct Point {
      int x;
    int y;
      Point() : x(0), y(0) {}
      Point(int a, int b) : x(a), y(b) {}
  };
 
class Solution {
public:
    int maxPoints(vector<Point>& points) {
		if(points.size()<3)
			return points.size();
		map<float,int> mp;
		int ret=0;
		for(int i=0;i<points.size();i++)
		{
			int cnt=0;
			for(int j=i+1;j<points.size();j++)
			{
				if(points[i].x!=points[j].x)
				{
					if(mp.find(kk(points[i],points[j]))==mp.end())	//没有
					{
						mp[kk(points[i],points[j])]=1;
					}
					else mp[kk(points[i],points[j])]++;
				}
				else{
					if(points[i].y!=points[j].y)	//不重合,垂直
						ret++;
					else 
					{
						mp[kk(points[i],points[j])]++;
						cnt++;
					}
				}
			}
		}
		int res=0;
		for(auto it=mp.begin();it!=mp.end();it++)
		{
			if(it->second>res)
				res=it->second;
		}
		if(ret>res)
			res=ret;
		int num=(1+(int)sqrt((float)(1+8*res)))/2;
		return num;
	}
private:
	float kk(Point a,Point b)
	{
		return (a.y-b.y)/(a.x-b.x);
	}
};

