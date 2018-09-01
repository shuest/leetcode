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


// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n;
		while(low <= high) {
			int mid = low + (high - low) / 2;
			int temp = guess(mid);
			if(temp == 0) 
				return mid;
			else if(temp == 1)
				low = mid + 1;
			else if(temp == -1)
				high = mid -1;
		}
    }
};