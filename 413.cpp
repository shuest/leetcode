
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
    int numberOfArithmeticSlices(vector<int>& A) {
        int cnt = 0,result = 0;
		for(int i = 2; i < A.size(); i++) {
			if(A[i-1] - A[i - 2] == A[i] - A[i - 1]) {
				cnt++;
				result += cnt;
			} else {
				cnt = 0;
			}
		}
		return result;
    }
};