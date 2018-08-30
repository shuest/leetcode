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

//记录出现一次的，顺序无关
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
		sort(nums.begin(),nums.end());
		vector<int> v(2);
		int flag = 0;
		for(int i = 0; i < nums.size() - 1; i = i+ 2) {
			if(nums[i] != nums[i+1]) { //找到第一个
				v[0] = nums[i];
				for(int j = i + 1; j < nums.size()-1; j = j + 2) {
					if(nums[j] != nums[j+1]) {
						v[1] = nums[j];
						flag = 1; //成功
						break;
					}
				}
				break;
			}
		}
		if(flag == 0) {
			v[1] = nums[nums.size() - 1];
		}
		return v;
    }
};