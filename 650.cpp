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

//�Ӻ���ǰ��
//9�Ļ���Ҫ3���ƣ���ճ����ճ��������3����ô����
class Solution {
public:
    int minSteps(int n) {
        int ans = 0;
		for(int i = 2; i <= sqrt(n); i++) {
			while(n % i == 0) {
				ans += i;
				n /= i;
			}
		}
		if(n != 1) ans += n;
		return ans;
    }
};