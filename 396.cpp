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
    int maxRotateFunction(vector<int>& A) {
		int len = A.size(), sum = 0;
		if(len == 0)
			return 0;
		vector<int> F(len);
		for(int i = 0; i < len; i++) {
			sum += A[i];
			F[0] += i * A[i];
		}
		int maxn = F[0];
		for(int i = 1; i < len; i++) {
			F[i] = F[i-1] + sum - len * A[len - i];
			maxn = max(F[i], maxn);
		}
		return maxn;
    }
};