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



using ll = long long;
class Solution {
public:
		ll gcd(ll a , ll b) {
		return  b ==0? a:gcd(b,a%b);
	}
    int mirrorReflection(int p, int q) {
        ll m = 0, n = 0;
        // 最小公倍数
        ll g = p * q / gcd(p, q);
        n = g / p;
        m = g / q;
        if (m % 2 == 1 && n % 2 == 0) {
            return 0;
        }
        else if (m % 2 == 1 && n % 2 == 1) {
            return 1;
        }
        else if (m % 2 == 0 && n % 2 == 1) {
            return 2;
        }
        return 0;
    }
};
