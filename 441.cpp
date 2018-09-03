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
    int arrangeCoins(int n) {
		int cnt = n,i = 1;
		while(cnt >= i )
		{
			cnt = cnt - i;
			i++;
		}
		return i - 1;
    }
};