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
    vector<int> getRow(int rowIndex) {
        //Cn1£¬Cn2.¡£¡£
		//
		vector<int> v(rowIndex+1);
		v[0]=1;
		for(int i=1;i<=rowIndex;i++)
			v[i]=(long long int) v[i-1]*(long long int)(rowIndex-i+1)/i;
		return v;
    }
	
};