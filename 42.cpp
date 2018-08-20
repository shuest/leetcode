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
    int trap(vector<int>& height) {
		int res=0,l=0,r=height.size()-1;
		while(l<r)
		{
			int minh=min(height[l],height[r]);
			if(height[l]==minh)//�������С
				while(++l<r&&height[l]<minh)
					res+=minh-height[l];
			else	//�ұ�����С
				while(l<--r&&height[r]<minh)
					res+=minh-height[r];

		}
		return res;
    }
};