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

//��������ж��ٸ�1
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res(num + 1, 0);
		for(int i = 1; i <= num; i++) {
			res[i] = res[i & (i-1)] + 1;
			//i & (i-1)��i�����Ƶ����һ��1���0
		}
		return res;
    }
};