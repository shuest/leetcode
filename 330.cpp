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

//������ʹﵽn,����������Ҫ�ӵ��������ĸ���
class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int len = nums.size();
		long long int t = 1;
		int cnt = 0;
		int i = 0;
		while(t <= n) {
			if(i < len && nums[i] <= t) {
				t = t + nums[i];
				i++;
			} else {
				t = t + t;
				cnt++;
			}
		}
		return cnt;
    }
};