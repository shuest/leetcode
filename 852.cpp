#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
using namespace std;	

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
		for(int i = 1; i < A.size() - 1; i++) {
			if(A[i] >A[i - 1] && A[i] > A[i + 1])
				return i;
		}
    }
};