
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

//���������Σ��Ѻ������ǰ�壬����Ϊֹ
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		if(nums.empty())
			return 0;
		int index=0,count=1;
		for(int i=1;i<nums.size();i++)
		{
			if(nums[i]==nums[index])
			{
				if(count<2){
					nums[++index]=nums[i];
					count++;
				}
				//����2��ֱ���Թ�
			}
			else{
				nums[++index]=nums[i];
				count=1;
			}
		}
		return index+1;
    }
};