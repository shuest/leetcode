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
    int findNthDigit(int n) {
        long digit = 1, sum = 9;
		//digit是数位个数，sum是有多少个。
		//比如2位数：10-99,一共90个，共计180个数字
		while(n > digit * sum) {
			n = n - digit * sum;
			sum = sum * 10;
			digit++;
		}//找到是几位数
		int index = n % digit;  //index是再结果那个数中的第几位
		if(index == 0)
			index = digit;
		long num = pow(10, digit - 1); //起始
		num += (index == digit) ? (n/digit - 1) : (n / digit);  //起始+偏移=结果数
		for(int i = index; i < digit; i++) //12345，若求3，/100，%10
			num = num / 10;
		return num % 10;
    }
};