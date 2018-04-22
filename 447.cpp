#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>

//pair表示点坐标
using namespace std;
class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int res=0;
		for(int i=0;i<points.size();i++)
		{
			unordered_map<int,int> record;	//距离<->个数
			for(int j=0;j<points.size();j++)
				if(j!=i)	
					record[dis(points[i],points[j])]++;
			for(auto it=record.begin();it!=record.end();it++)
			{
				if(it->second>=2)
					res+=it->second*(it->second-1);	//与i距离相等的n个点中，有Cn2个组合方式
			}
		}
		return res;
    }
private:
	//int 32位整型，-2147483648 ~ +2147483647，而20000*20000在这个范围内
	int dis(const pair<int,int> &pa,const pair <int,int> &pb)
	{
		return (pa.first-pb.first)*(pa.first-pb.first)+(pa.second-pb.second)*(pa.second-pb.second);
	}
};