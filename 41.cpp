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
    int firstMissingPositive(vector<int>& nums) {
		int n=nums.size();
		for(int i=0;i<n;i++)
		{
			if(nums[i]!=i+1)
				if(nums[i]<=n&&nums[i]>=1&&nums[nums[i]-1]!=nums[i])
				{//�����ڷ�Χ�ڣ��Ҹ�λ�������ô���λ���ϵ����Ǵ��
					swap(nums[i],nums[nums[i]-1]);//����λ�ϵ�����λ����ȷλ��,����λ�ϵ������ǲ��Ե�
					i--;
				}
		}
		for(int i=0;i<n;i++)
		{
			if(nums[i]!=i+1)
				return i+1;
		}
		return n+1;
    }
};