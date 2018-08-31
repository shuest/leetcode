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

//ÊÇ3µÄÃÝ
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) 
			return false;
		return pow(3, (round)(log(n)/log(3))) == n;
    }
};