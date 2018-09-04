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
    int islandPerimeter(vector<vector<int>>& grid) {
        int cnt = 0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                if(grid[i][j] == 1) {
                    cnt += 4;
                    if(i != 0 && grid[i-1][j] == 1)
                        cnt -= 2;
                    if(j != 0 && grid[i][j-1] == 1)
                        cnt -= 2;
                }
            }
        }
        return cnt;
    }
};