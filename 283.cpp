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

//�����е�0�Ƶ�����
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
		int len = nums.size();
		for(int i = 0; i < len - 1; i++) {
			if(nums[i] == 0) {
				for(int j = i + 1; j < len; j++) {
					if(nums[j] != 0) {
						swap(nums[i],nums[j]);
						break;
					}
				}
			}
		}
    }
};