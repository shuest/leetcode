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

//10进制转成16进制
class Solution {
public:
    string toHex(int num) {
        string result = "", s = "0123456789abcdef";
		for(int i = 1; i <= 8; i++) {
			result += s[num &15]; //每次检查4位
			num = num >> 4;
		}
		reverse(result.begin(),result.end());
		while(result.length() > 1 && result[0] == '0')
			result = result.substr(1);
		return result;
    }
};