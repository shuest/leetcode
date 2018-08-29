#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<stdint.h>
using namespace std;

//问二进制中1的个数
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
		while(n!=0)
		{
			n=n&(n-1);
			cnt++;
		}
		return cnt;
    }
};