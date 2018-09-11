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
    string convertToBase7(int num) {
      if(num == 0) return "0";
	  string sign = "";
	  if(num < 0) {
		num = 0 - num;
		sign = "-";
	  }
	  string result = "";
	  while(num != 0) {
		result = to_string(num % 7) + result; //�Ƚ������Ǹ�λ������ǰ��
		num = num / 7;
	  }
	  return sign + result;
    }
};