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
    bool isPowerOfTwo(int n) {
        if(n<=0)
			return false;
		return pow(2,(round)(log(n)/log(2)))==n;
    }
};