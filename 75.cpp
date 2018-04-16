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
class Solution {
public:
    void sortColors(vector<int>& nums) {
		//遍历一遍的
		int zero=-1;	//nums[0...zero] ==0
		int two=nums.size(); //nums[two,n-1] ==2
		for(int i=0;i<two;)
		{
			if(nums[i]==1)
				i++;
			else if(nums[i]==2)
			{
				two--;
				swap(nums[i],nums[two]);	//还没有判断e值呢，不用i++
			}
			else if(nums[i]==0)
			{
				zero++;
				swap(nums[i],nums[zero]);
				i++;	//没有未知的，处理完毕
			}
		}
    }
};