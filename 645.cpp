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

//ֱ�������ǲ��Եģ����ܲ���1��ʼ����2��3��3����iλ�����Ǹ���Ӧ���ڵ�λ�ã������һ���ͽ���������ڸ��ڵ�λ��
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