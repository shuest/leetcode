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
    int kthGrammar(int N, int K) {
        if(N == 1) return 0;
		return (K % 2 == 0) ? !kthGrammar(N - 1,(K + 1) / 2) : kthGrammar(N - 1,(K + 1) / 2); 
    }
};