#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>

using namespace std;


//����n=25, n!=25*24*23*...*15...*10...*5...*1=(5*5)*24*23*...*(5*3)*...(5*2)*...(5*1)*...*1������25�ɿ���5*5,����һ��5��Ӧ�ü���
//�����������Ҳ�ܼ򵥣����ȶ�n��5���Ƴ����еĵ���5��Ȼ���25���Ƴ������5���Դ����ơ������ǹ��ɳ��ļ����׺0�Ĺ�ʽ��
//n!��׺0�ĸ��� = n!��������5�ĸ���= floor(n / 5) + floor(n / 25) + floor(n / 125) + ....

class Solution {
public:
    int trailingZeroes(int n) {
        int cnt=0;
		while(n!=0)
		{
			cnt=cnt+n/5;
			n=n/5;
		}
		return cnt;
    }
};