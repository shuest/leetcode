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

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
		for(int i=0;i<32;i++)
		{
			ans=ans*2+n%2;
			n=n/2;
		}
		return ans;
    }
};