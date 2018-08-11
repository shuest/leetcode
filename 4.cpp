#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<bitset>
using namespace std;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
		int s1=0,d1=n1-1,s2=0,d2=n2-1,m1,m2;
		while(s1!=d1||s2!=d2)
		{
			m1=(s1+d1)/2;
			m2=(s2+d2)/2;
			if(nums1[m1]==nums2[m2])
				return nums1[m1];
			if(nums1[m1]<nums2[m2])	//a<p<b,Ҫa��ĺ�bС��
			{
				if((s1+d1)%2==0)	//������
				{
					s1=m1;
					d2=m2;
				}
				else{
					s1=m1+1;
					d2=m2;
				}
			}
			else{	//a>p>b.Ҫ��aС�ĺͱ�b���
				if((s2+d2)%2==0)
				{
					d1=m1;
					s2=m2;
				}
				else {
					d1=m1;
					s2=m2+1;
				}
			}
		}
		return nums1[s1]<nums2[s2]?nums1[s1]:nums2[s2];
    }
};