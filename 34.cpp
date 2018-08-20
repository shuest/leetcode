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

//�ź��������
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
		int low=0,high=nums.size()-1;
		while(low<=high&&nums[low]!=target&&nums[high]!=target) //[]
		{
			int mid=(high-low)/2+low;
			if(nums[mid]<target)
				low=mid+1;
			else if (nums[mid]>target)
				high=mid-1;
			else break;
		}//��low��high
		vector<int> v(2);
		if(low>high){ //ʧ��
			v[0]=-1;
			v[1]=-1;
			return v;
		}
		while(nums[low]!=target)
			low++;
		while(nums[high]!=target)
			high--;
		v[0]=low;
		v[1]=high;
		return v;
    }
};