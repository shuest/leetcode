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
    bool judgeSquareSum(int c) {
        for(int i = sqrt(c); i >= 0; i--)
		{
			for(int j = sqrt(c); j >= 0; j--) {
				if(i * i + j * j == c)
					return true;
				if(i * i + j * j < c) break;
			}
		}
		return false;
    }
};