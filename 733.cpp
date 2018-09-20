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
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
		n = image.size();
		if(n == 0) return image;
		m = image[0].size();
		visit.resize(n,vector<bool>(m,false));
		dfs(image,sr,sc,image[sr][sc],newColor);
		return image;
    }
private:
	int n,m,arr[5] = {1,0,-1,0,1};
	vector<vector<bool>> visit;
	void dfs(vector<vector<int>>& image,int sr,int sc,int oldColor,int newColor) {
		image[sr][sc] = newColor;
		visit[sr][sc] = true;
		for(int i = 0; i < 4; i++) {
			int tx = sr + arr[i], ty = sc + arr[i+1];
			if(tx >= 0 && tx < n && ty >= 0 && ty < m && visit[tx][ty] == false && image[tx][ty] == oldColor)
				dfs(image,tx,ty,oldColor,newColor);
		}

	}
};