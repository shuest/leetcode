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

//能组成的最长回文串,大小写算两个字
//偶数个都算里，奇数个的只能算成偶数的，记录为flag
class Solution {
public:
    int longestPalindrome(string s) {
		int hash[256] = {0}, len = 0, flag = 0;
		for(int i = 0; i < s.length(); i++) 
		hash[s[i]]++;
		for(int i = 0;i < 256; i++) {
			if(hash[i] % 2 == 0)
				len += hash[i];
			else {
				len += (hash[i] - 1);
				flag = 1;
			}
		}
		return len + flag;
    }
};