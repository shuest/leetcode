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
    bool isUgly(int num) {
		if(num <= 0) {
			return false;
		}
		int flag = 0;
		while(num != 1) {
			flag = 0;
			if(num % 2 == 0) {
				num = num / 2;
				flag = 1;
			}
			if(num %3 == 0) {
				num = num / 3;
				flag = 1;
			}
			if(num % 5 == 0) {
				num = num / 5;
				flag = 1;
			}
			if(flag == 0) {
				return false;
			}
		}
		return true;
    }
};