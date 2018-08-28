#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>

using namespace std;



class Solution {
public:
    string convertToTitle(int n) {
        string s;
		while(n)
		{
			s=(char)((n-1)%26+'A')+s;
			n=(n-1)/26;
		}
		return s;
    }
};