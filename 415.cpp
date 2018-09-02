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

//string[0]是高位，所以要逆置相加
class Solution {
public:
    string addStrings(string num1, string num2) {
		int len1 = num1.size(),len2 = num2.size();
		for(int i = 0; i < len1 / 2; i++) 
			swap(num1[i],num1[len1-i-1]);
		for(int i = 0; i < len2 / 2; i++)
			swap(num2[i],num2[len2 - i - 1]);
		string result = "";
		int sign = 0, p = 0, q = 0;
		while(p < len1 && q <len2) {
			int t = (num1[p] - '0') + (num2[q] - '0') + sign;
			if(t >= 10) { //进位
				t = t - 10;
				sign = 1;
			} else {
				sign = 0;
			}
			result += (char) (t + '0');
			p++;
			q++;
		}
		while(p < len1) { //p剩下
			int t = (num1[p] - '0') + sign;
			if(t >= 10) {
				t = t -10;
				sign = 1;
			} else {
				sign = 0;
			}
			result += (char) (t + '0');
			p++;
		}
		while(q < len2) {
			int t = (num2[q] - '0') + sign;
			if(t >= 10) {
				t = t - 10;
				sign = 1;
			} else {
				sign = 0;
			}
			result += (char)(t + '0');
			q++;
		}
		if(sign == 1) 
			result += '1'; //最高位补1
		int len = result.length();
		for(int i = 0; i < len / 2; i++) {
			swap(result[i], result[len - 1 - i]);
		}
		return result;
    }
};