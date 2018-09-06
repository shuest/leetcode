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

//每次都是看index是几就加几个，并非只看前面相邻的
class Solution {
public:
    int magicalString(int n) {
        string s = "122";
		int index = 2;
		while(s.length() < n) {
			int cnt = s[index] - '0';
			char c = (s.back() == '1'? '2':'1');
			string temp(cnt,c);
			s += temp;
			index ++;
		}
		return count(s.begin(),s.begin() + n,'1');
    }
};