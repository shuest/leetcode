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
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int maxae=A>E?A:E; //¸ºµÄ
		int mincg=C>G?G:C;
		int maxfb=F>B?F:B;
		int minhd=H>D?D:H;
		int overlap; //ÖØµþ
		if(maxae>=mincg||maxfb>=minhd)
			overlap=0;
		else
			overlap=(mincg-maxae)*(minhd-maxfb);
		return (C-A)*(D-B)+(G-E)*(H-F)-overlap;
    }
};