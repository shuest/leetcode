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


//例如n=25, n!=25*24*23*...*15...*10...*5...*1=(5*5)*24*23*...*(5*3)*...(5*2)*...(5*1)*...*1，其中25可看成5*5,多了一个5，应该加上
//处理这个问题也很简单，首先对n÷5，移除所有的单个5，然后÷25，移除额外的5，以此类推。下面是归纳出的计算后缀0的公式。
//n!后缀0的个数 = n!质因子中5的个数= floor(n / 5) + floor(n / 25) + floor(n / 125) + ....

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