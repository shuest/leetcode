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

//二分找第一个Bad Version  hao hao hao  huai huai huai
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;
		while(low <= high) { 
			int mid = (high - low) / 2 + low;
			if(isBadVersion(mid))
				high = mid - 1;
			else 
				low = mid + 1;
		}
		return low;
    }
};