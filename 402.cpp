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


//移掉k个数，使之最小
class Solution {
public:
    string removeKdigits(string num, int k) {
        string result = "";
		stack<char> s;
		for(int i = 0; i < num.size(); i++) {
			while(k > 0 && !s.empty() && s.top() > num[i]) {//可以弹栈
				k--;
				s.pop();
			}
			s.push(num[i]);
		}
		while(k > 0 && !s.empty()) {
			k--;
			s.pop();
		}
		while(!s.empty()) {
			result = s.top() + result;
			s.pop();
		}
		int index = 0;
		while(result[index] == '0') index++;
		result = result.substr(index);
		if(result == "") return "0";
		return result;
    }

};