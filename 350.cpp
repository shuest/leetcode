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

//int main()
//{
//	int a[10];
//	set<int> s;
//	for(int i=0;i<9;i++)
//		s.insert(i);
//	s.erase(5);
//	for(auto it=s.begin();it!=s.end();it++)
//		cout<<*it<<' ';

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		map<int,int> mp;
		for(int i=0;i<nums1.size();i++)
			mp[nums1[i]]++;
		vector<int> res;
		for(int i=0;i<nums2.size();i++)
			if(mp[nums2[i]]!=0)
			{
				mp[nums2[i]]--;
				res.push_back(nums2[i]);
			}
			return res;
    }
};