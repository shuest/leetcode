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

//������λ�;���Mod9������
class Solution {
public:
    int addDigits(int num) {
		if(num == 0) 
			return 0;
		else if(num%9==0)
			return 9;
		else return num%9;
    }
};