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

//��k������ƽ��ֵ
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
		if(nums.size() == 0) return 0.0;
		vector<int> sum(nums.size());
		for(int i = 0; i < nums.size(); i++) { //�����еĺͣ���Ӧһ�����ǽ��
			sum[i] = sum[i - 1] + nums[i];
		}
		int ans = sum[k-1];
		for(int i = k; i < nums.size(); i++) { //�����ans
			ans = max(ans,sum[i] - sum[i - k]);
		}
		return ans * 1.0 / k;
    }
};