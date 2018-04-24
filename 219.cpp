#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<unordered_set>

using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> record;
		for(int i=0;i<nums.size();i++)
		{
			if(record.find(nums[i])!=record.end())
				return true;		//找到了，之前有过。
			record.insert(nums[i]);
			//保证窗口里有K个元素，超了删第一个
			if(record.size()==k+1)
				record.erase(nums[i-k]);	//原来0，窗口4，I是3，插进去了4-》新的i，删除0就行，即i-k
		}
		return false;
    }
};