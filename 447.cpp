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

//pair��ʾ������
using namespace std;
class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int res=0;
		for(int i=0;i<points.size();i++)
		{
			unordered_map<int,int> record;	//����<->����
			for(int j=0;j<points.size();j++)
				if(j!=i)	
					record[dis(points[i],points[j])]++;
			for(auto it=record.begin();it!=record.end();it++)
			{
				if(it->second>=2)
					res+=it->second*(it->second-1);	//��i������ȵ�n�����У���Cn2����Ϸ�ʽ
			}
		}
		return res;
    }
private:
	//int 32λ���ͣ�-2147483648 ~ +2147483647����20000*20000�������Χ��
	int dis(const pair<int,int> &pa,const pair <int,int> &pb)
	{
		return (pa.first-pb.first)*(pa.first-pb.first)+(pa.second-pb.second)*(pa.second-pb.second);
	}
};