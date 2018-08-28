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
    int compareVersion(string version1, string version2) {
		while(!version1.empty()||!version2.empty())
		{
			int ver1=version1.empty()?0:stoi(version1);
			int ver2=version2.empty()?0:stoi(version2);
			if(ver1>ver2)
				return 1;
			else if(ver1<ver2)
				return -1;
			else {
				int pos1=version1.find('.');
				int pos2=version2.find('.');
				//pos1 == string::npos意思是没有.
				//string::npos是string 的结束位子
				version1=(pos1 == string::npos)?"":version1.substr(pos1+1);
				version2=(pos2==string::npos)?"":version2.substr(pos2+1);
			}
		}
		return 0;
    }
};