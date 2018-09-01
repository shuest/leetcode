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

//不能用+-的加法
class Solution {
public:
    int getSum(int a, int b) {
        int carry = (a & b) << 1; //进位
		int result = (a ^ b); //本位加
		while(carry != 0) {
			int temp = carry;
			carry = (result & temp) << 1;
			result = result ^ temp;
		}
		return result;
    }
};