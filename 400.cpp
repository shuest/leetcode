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
		//digit����λ������sum���ж��ٸ���
		//����2λ����10-99,һ��90��������180������
		while(n > digit * sum) {
			n = n - digit * sum;
			sum = sum * 10;
			digit++;
		}//�ҵ��Ǽ�λ��
		int index = n % digit;  //index���ٽ���Ǹ����еĵڼ�λ
		if(index == 0)
			index = digit;
		long num = pow(10, digit - 1); //��ʼ
		num += (index == digit) ? (n/digit - 1) : (n / digit);  //��ʼ+ƫ��=�����
		for(int i = index; i < digit; i++) //12345������3��/100��%10
			num = num / 10;
		return num % 10;
    }
};