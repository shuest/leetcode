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

//����ÿһλ������1�ĸ�����cnt��0�ĸ�����n-cnt������ϼ����
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