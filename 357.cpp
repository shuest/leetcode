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


//f(1) = 10, ..., f(k) = 9 * 9 * 8 * ... (9 - k + 2) [The first factor is 9 because a number cannot start with 0].
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0) return 1;
		int res = 10, cnt = 9;
		for(int i = 2; i <= n; i++) {
			cnt *= (11 - i);
			res += cnt;
		}
		return  res;
    }
};