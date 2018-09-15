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

//从后往前推
//9的话，要3复制，再粘贴，粘贴。再求3是怎么来的
class Solution {
public:
    int minSteps(int n) {
        int ans = 0;
		for(int i = 2; i <= sqrt(n); i++) {
			while(n % i == 0) {
				ans += i;
				n /= i;
			}
		}
		if(n != 1) ans += n;
		return ans;
    }
};