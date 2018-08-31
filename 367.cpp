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
    bool isPerfectSquare(int num) {
        long left = 0, right = INT_MAX, mid = 0;
		while(true) {
			mid = left + (right - left) / 2;
			if(mid * mid == num)
				return true;
			if(mid * mid < num && (mid + 1) * (mid + 1) > num)
				return false;
			if(mid * mid < num)
				left = mid + 1;
			else right = mid -1;
		}
		
    }
};