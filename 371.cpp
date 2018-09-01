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

//������+-�ļӷ�
class Solution {
public:
    int getSum(int a, int b) {
        int carry = (a & b) << 1; //��λ
		int result = (a ^ b); //��λ��
		while(carry != 0) {
			int temp = carry;
			carry = (result & temp) << 1;
			result = result ^ temp;
		}
		return result;
    }
};