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
    string originalDigits(string s) {
        map<char,int> m;
		int cnt[10] = {0},temp;
		for(int i = 0; i < s.length(); i++) 
			m[s[i]]++;
		temp = m['z'];
		cnt[0] = temp;
		m['z'] -= temp;
		m['e'] -= temp;
		m['r'] -= temp;
		m['o'] -= temp;
		temp = m['x'];
		cnt[6] = temp;
		m['s'] -= temp;
		m['i'] -= temp;
		m['x'] -= temp;
		temp = m['w'];
        cnt[2] = temp;
        m['t'] -= temp;
        m['w'] -= temp;
        m['o'] -= temp;
        temp = m['g'];
        cnt[8] = temp;
        m['e'] -= temp;
        m['i'] -= temp;
        m['g'] -= temp;
        m['h'] -= temp;
        m['t'] -= temp;
        temp = m['u'];
        cnt[4] = temp;
        m['f'] -= temp;
        m['o'] -= temp;
        m['u'] -= temp;
        m['r'] -= temp;
        temp = m['s'];
        cnt[7] = temp;
        m['s'] -= temp;
        m['e'] -= temp;
        m['v'] -= temp;
        m['e'] -= temp;
        m['n'] -= temp;
        temp = m['r'];
        cnt[3] = temp;
        m['t'] -= temp;
        m['h'] -= temp;
        m['r'] -= temp;
        m['e'] -= temp;
        m['e'] -= temp;
        temp = m['o'];
        cnt[1] = temp;
        m['o'] -= temp;
        m['n'] -= temp;
        m['e'] -= temp;
        temp = m['f'];
        cnt[5] = temp;
        m['f'] -= temp;
        m['i'] -= temp;
        m['v'] -= temp;
        m['e'] -= temp;
        temp = m['e'];
        cnt[9] = temp;
        m['n'] -= temp;
        m['i'] -= temp;
        m['n'] -= temp;
        m['e'] -= temp;
		string result = "";
		for(int i = 0; i <= 9; i++) {
			for(int j = 0; j < cnt[i]; j++)
				result += to_string(i);
		}
		return result;
    }
};