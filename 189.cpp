#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>

using namespace std;

//旋转，依次把后面的旋转到前面
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
		int n=nums.size();
		k=k%n;
		for(int i=0;i<=(n-1-k)/2;i++)
			swap(nums[i],nums[n-1-k-i]);
		for(int i=n-k;i<=(n-k+n-1)/2;i++)
			swap(nums[i],nums[n-1+n-k-i]);
		for(int i=0;i<=(n-1)/2;i++)
			swap(nums[i],nums[n-1-i]);
    }
};