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
    int findKthLargest(vector<int>& nums, int k) {
		multiset<int> s;
		for(int i=0;i<nums.size();i++)
		{
			s.insert(nums[i]);
			if(s.size()>k)
				s.erase(s.begin());
		}
		return *s.begin();
	}
};