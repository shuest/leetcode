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
    int countBattleships(vector<vector<char>>& board) {
        int result = 0;
		if(board.size() == 0) return 0;
		for(int i = 0; i < board.size(); i++) {
			for(int j = 0; j < board[0].size(); j++) {
				if(board[i][j] == 'X' && (i == 0 ||board[i-1][j] == '.') && (j == 0 || board[i][j-1] == '.'))
					result++;
			}
		}
		return result;
    }
};