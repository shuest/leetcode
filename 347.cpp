#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;	//ÿ��Ԫ�س��ֵ�Ƶ��
		for(int i=0;i<nums.size();i++)
			freq[nums[i]]++;
		//freq[Ԫ��]=Ƶ��,(Ԫ�أ�Ƶ�ʣ�
		//pq���ݶ���(Ƶ�ʣ�Ԫ��) ��ʽ
		priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >pq;
		for(auto it=freq.begin();it!=freq.end();it++)
		{
			if(pq.size()==k)
			{
				if(it->second > pq.top().first)
				{
					pq.pop();
					pq.push(make_pair(it->second,it->first));
				}
			}
			else{
				pq.push(make_pair(it->second,it->first));
			}
		}
		vector<int> res;
		while(!pq.empty())
		{
			res.push_back(pq.top().second);
			pq.pop();
		}
		return res;
    }
};