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

//�ʶ�������1�ĸ���
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