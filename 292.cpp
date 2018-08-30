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

//拿1~3个石子每次，所以有4个石子的时候必输，567必赢，以此类推
class Solution {
public:
    bool canWinNim(int n) {
        return n%4;
    }
};