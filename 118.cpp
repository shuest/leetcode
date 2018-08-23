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
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
		if(numRows==0)
			return v;
		for(int i=0;i<numRows;i++)
			v[i].resize(i+1);
		v[0][0]=1;
		if(numRows==1)
			return v;
		v[1][0]=1;
		v[1][1]=1;
		for(int i=2;i<numRows;i++){ //±ßÉÏ1
			v[i][0]=1;
			v[i][i]=1;
		}
		for(int i=2;i<numRows;i++){
			for(int j=1;j<i;j++)
				v[i][j]=v[i-1][j-1]+v[i-1][j];
		}
		return v;
    }
};