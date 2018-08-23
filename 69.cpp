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
    int mySqrt(int x) {
        long left=0,right=INT_MAX,mid=0;
		while(true)
		{
			mid=left+(right-left)/2;
			if(mid*mid<=x&&(mid+1)*(mid+1)>x)
				return (int)mid;
			if(mid*mid<x)
				left=mid+1;
			else right=mid-1;
		}
    }
};