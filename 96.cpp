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
    int numTrees(int n) {
        vector<int> v(n+1);
		v[0]=1,v[1]=1,v[2]=2;
		for(int i=3;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
				v[i]+=v[j-1]*v[i-j];
		}
		return v[n];
    }
};