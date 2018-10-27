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

//
//class Solution {
//public:
//    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//        int n1=nums1.size(),n2=nums2.size();
//		int s1=0,d1=n1-1,s2=0,d2=n2-1,m1,m2;
//		while(s1<d1||s2<d2)
//		{
//			m1=(s1+d1)/2;
//			m2=(s2+d2)/2;
//			if(nums1[m1]==nums2[m2])
//				return nums1[m1];
//			if(nums1[m1]<nums2[m2])	//a<p<b,要a大的和b小的
//			{
//				if((d1 - s1 + 1)%2==1)	//奇数个
//				{
//					s1=m1;
//					d2=m2;
//				}
//				else{
//					s1=m1+1;
//					d2=m2;
//				}
//			}
//			else{	//a>p>b.要比a小的和比b大的
//				if(( d2- s2 + 1)%2==1)
//				{
//					d1=m1;
//					s2=m2;
//				}
//				else {
//					d1=m1;
//					s2=m2+1;
//				}
//			}
//		}
//		return nums1[s1]<nums2[s2]?nums1[s1]:nums2[s2];
//		
//    }
//};
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int n1 = nums1.size(),n2 = nums2.size();
		if(n1<n2)
		   return findMedianSortedArrays(nums2,nums1);
		int l1 = 0,r1 = n1 - 1;
		int l2 = 0, r2 = n2 - 1;
		int m1 = l1 + (r1 - l1)/2;
		bool odd =( (n1+n2)%2 )== 1 ? true:false;
		int m2 = l2 + (r2 - l2) / 2;
		while(l1 <= r1) {
			if(nums1[m1] == nums2[m2])
				return (double)nums1[m1];
			if(nums1[m1] < nums2[m2]) {
				l1 = m1 + 1;
				r2 = n2 - 1;
			}
			else{
				r1 = m1 - 1;
				l2 = m2 + 1;
			}
			m1 = l1 + (r1 - l1)/2;
			m2 = l2 + (r2 - r2)/2;
		}
		if(odd)
			return double(nums1[m1]);
		else 
			return (double(nums1[m1])+double(nums2[m2]))/2;
    }
};