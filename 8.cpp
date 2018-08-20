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
    int myAtoi(string str) {
        if(str.length() == 0)
            return 0;
        int i = 0, flag = 1;
        while(isspace(str[i])) {
            i++;
        }
        if(str[i] == '+' || str[i] == '-') {
            if(str[i] == '-')
                flag = 0;
            i++;
        }
        str = str.substr(i);
        for(int j = 0; j < str.length(); j++) {
            if(!isdigit(str[j])) {
                str = str.substr(0, j);
                break;
            }
        }
        while(str[0]=='0')
            str=str.substr(1);
        if(str.length() == 0)
            return 0;
        if(str.length() > 10) {
            if(flag == 0)
                return -2147483648;
            else
                return 2147483647;
        }
        long long int ans = stoll(str);
        if(flag == 0)
            ans = 0 - ans;
        if(ans > 2147483647) {
            return 2147483647;
        } else if (ans < -2147483648) {
            return -2147483648;
        } else {
            return (int)ans;
        }
    }
};