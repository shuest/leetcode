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


//�ҵ���һ�����ִ���Ϊ1���ַ���������λ�ü���
class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> m;
		for(int i = 0; i < s.size(); i++) {
			m[s[i]]++;
		}
		for(int i = 0; i < s.size(); i++) {
			if(m[s[i]] == 1) 
				return i;
		}
		return -1;
    }
};