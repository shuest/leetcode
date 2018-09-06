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

//对于每一位求所有1的个数是cnt，0的个数是n-cnt，相组合即相乘
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int result = 0, n = nums.size();
        for(int i = 0; i < 32; i++) {
            int cnt = 0;
            for(int j = 0; j < n; j++) {
                if(nums[j] >> i & 1 == 1)
                    cnt++;
            }
            result += cnt * (n - cnt);
        }
        return result;
    }
};