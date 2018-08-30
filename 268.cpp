
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

//找到数组中缺失的元素
class Solution {
public:
    int missingNumber(vector<int>& nums) {
		vector<int> book(nums.size()+1,0); 
		for(int i =0; i < nums.size(); i++) {
			book[nums[i]] = 1;
		}
		for(int i = 0; i <= nums.size(); i++) {
			if(book[i] == 0) {
				return i;
			}
		}
    }
};