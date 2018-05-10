#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cctype>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
		int l=0,r=height.size()-1;
		int maxsize=0;
		while(l<r)
		{
			if(min(height[l],height[r])*(r-l)>maxsize)
				maxsize=min(height[l],height[r])*(r-l);
			if(height[l]<height[r])
				l++;
			else r--;
		}
		return maxsize;
    }
};