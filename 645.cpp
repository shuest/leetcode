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

//直接排序是不对的，可能不从1开始，如2，3，3，找i位数和那个数应该在的位置，如果不一样就交换，最后都在该在的位置
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
		vector<int> res;
		for(int i = 0; i < nums.size(); i++) {
			while(nums[i] != nums[nums[i] - 1])
				swap(nums[i],nums[nums[i] - 1]);
		}
		for(int i = 0; i < nums.size(); i++) {
			if(nums[i] != i + 1) {
				res.push_back(nums[i]);
				res.push_back(i + 1);
			}
		}
		
		return res;
    }
};