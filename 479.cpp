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

//最大的回文串，是由两个数相乘组成的
class Solution {
public:
    int largestPalindrome(int n) {
        int l = pow(10,n - 1), r = pow(10,n) - 1;
		for(int i = r; i >= 1; i--) {
			string s = to_string(i);
			string t = s;
			reverse(t.begin(),t.end());
			long ans = stol(s + t);
			for(long j = r; j * j >= ans; j--) //能被整除且一个比r大等，一个比r小等
				if(ans % j == 0 && ans / j <= r)
					return ans % 1337;
		}
		return 9; //n=1
    }
};