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
    bool checkPerfectNumber(int num) {
        if(num == 1) return false;
		int sum = 1;
		for(int i = 2; i <= sqrt(num); i++) {
			if(num % i == 0)
				sum = sum + num/i + i;
		}
		return sum == num;
    }
};