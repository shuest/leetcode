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
    string getPermutation(int n, int k) {
        string result="";
		for(int i=1;i<=n;i++)
			result+=to_string(i);
		do{
			k--;
		}while(k>0&&next_permutation(result.begin(),result.end()));
		return result;
    }
};