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
    bool isIdealPermutation(vector<int>& A) {
		for(int i = 0; i < A.size(); i++) {
			if(abs(A[i] - i) >= 2) return false;
		}
		return true;
    }
};