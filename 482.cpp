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
    string licenseKeyFormatting(string S, int K) {
        string result = "", temp = "";
		for(int i = 0; i < S.length(); i++) {
			if(S[i] != '-')
				temp += toupper(S[i]);
		}
		int len = temp.length(),index = 0;
		while(index < len % K)
			result += temp[index++];
		for(int i = 0; i < len - len % K; i++) {
			if(i % K == 0 && index != 0)
				result += '-';
			result += temp[index++];
		}
		return result;
    }
};