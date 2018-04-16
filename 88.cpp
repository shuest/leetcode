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

//倒着相加，从后往前看
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len=m+n-1;
		m--;n--;
		while(len>=0)
		{
			if(m>=0&&n>=0)
			{
				if(nums1[m]>nums2[n])
				{
					nums1[len]=nums1[m];
					m--;
				}
				else
				{
					nums1[len]=nums2[n];
					n--;
				}
				len--;
			}
			else if(m>=0)
			{
				nums1[len]=nums1[m];
				len--;m--;
			}
			else if(n>=0)
			{
				nums1[len]=nums2[n];
				len--;n--;
			}
		}
    }
};