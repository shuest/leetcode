
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


//ԭ����ת90�ȡ�
//1.�����Խ�������Ԫ�ؽ���
//2.���Ŵ�ֱ�����߷�������Ԫ�ؽ���
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
		for(int i=0;i<matrix.size();i++)
			for(int j=0;j<=i;j++)
				swap(matrix[i][j],matrix[j][i]);
		for(int i=0,j=matrix.size()-1;i<j;i++,j--)
		{
			for(int k=0;k<matrix.size();k++)
				swap(matrix[k][i],matrix[k][j]);
		}
    }
};