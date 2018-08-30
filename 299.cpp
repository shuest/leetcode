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


//相同且在数位的是A，存在相同数但位置不对的是B，问几个A几个B
class Solution {
public:
    string getHint(string secret, string guess) {
        int bull = 0, cow = 0;
        int s[10], g[10];
        memset(s, 0, sizeof(int) * 10);
        memset(g, 0, sizeof(int) * 10);
        for(int i = 0; i < secret.length(); i++) {
            if(secret[i] == guess[i]) {
                bull++;
            } else {
                s[secret[i] - '0']++;
                g[guess[i] - '0']++;
            }
        }
        
        for(int i = 0; i < 10; i++) {
            if(s[i] >= g[i]) {
                cow = cow + g[i];
            } else {
                cow = cow + s[i];
            }
        }
        
        string b = "";
        if(bull == 0)
            b = "0";
        while(bull) {
            char temp1 = (bull % 10 + '0');
            bull = bull / 10;
            b = temp1 + b;
        }
        
        string c = "";
        if(cow == 0)
            c = "0";
        while(cow) {
            char temp2 = (cow % 10 + '0');
            cow = cow / 10;
            c = temp2 + c;
        }
        
        string ans = b + 'A' + c + 'B';
        return ans;
    }
};