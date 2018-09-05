#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
using namespace std;


class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
		int result = 0, n = nums.size();
		for(int i = 0; i < n ; i++) {
			for(int j = i + 1; j < n; j ++)
			{
				result += ham(nums[i],nums[j]);
			}	
		}
		return result;
    }
	int ham(int a,int b) {
		if(b > a) 
			swap(a,b);
		int cnt = 0;
		while(a != b)
		{
			a=a & (a-1);
		}
		return cnt;
	}
};