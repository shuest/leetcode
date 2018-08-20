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
    int divide(int dividend, int divisor) {
        if(divisor==0||dividend==INT_MIN&&divisor==-1)
			return INT_MAX;///0»òÕßmin/(-1)=max
		int sign=((dividend>>31)^(divisor>>31))==0?1:-1;
		long a=abs((long)dividend);
		long b=abs((long)divisor);
		double c=exp(log(a)-log(b))+0.00000000001;
		return (int)(sign*c);
    }
};