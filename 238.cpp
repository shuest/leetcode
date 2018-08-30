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



//每个数组位置上的数是其他数位上的数的乘积
//禁止我们使用除法
//先求左边所有数的乘积，再算右边所有数的乘积
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
		vector<int> v(nums.size());
		int right = 1;
		v[0]=1;
		for(int i = 1; i < nums.size(); i++){
			v[i] = nums[i-1] * v[i-1];
		}//v[i]是前面的数乘积
		for(int i = nums.size()-2; i >= 0;i--){
			right = right * nums[i+1];  //i+1是最后一个，right是右边数的乘积
			v[i] = v[i] * right;
		}
		return v;
    }
};