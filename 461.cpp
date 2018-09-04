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
    int hammingDistance(int x, int y) {
        int cnt = 0;
		while(x != 0 || y!= 0) {
			if(x % 2 != y % 2) 
				cnt++;
			x /= 2;
			y /= 2;
		}
		return cnt;

    }
};