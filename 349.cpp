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
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> a,b;
		for(int i=0;i<nums1.size();i++)
		{
			a.insert(nums1[i]);
		}
		for(int i=0;i<nums2.size();i++)
		{
			b.insert(nums2[i]);
		}
		vector<int> res;
		for(auto it=a.begin();it!=a.end();it++)
		{
			if(b.find(*it)!=b.end())
				res.push_back(*it);
		}
		return res;
    }
};