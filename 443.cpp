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

//要修改chars并返回其长度
class Solution {
public:
    int compress(vector<char>& chars) {
		int i = 0, j = 0, n = chars.size();
		while(j < n) {
			if( j == n - 1|| chars[j] != chars[j + 1]) {
				chars[i++] = chars[j++];
			} else {
				chars[i++] = chars[j];
				int k = j;
				while(j < n && chars[j] == chars[k]) j++;
				string s = to_string(j-k);
				for(char c : s) chars[i++] = c;
			}
		}
		return i;
    }
};