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
    vector<int> sortArrayByParity(vector<int>& A) {
       int i = 0, j = A.size() -1;
        while(i < j) {
            while(i < j && A[i] %2 == 0)
                i++;
            while(i < j && A[j] % 2 == 1)
                j--;
            if(i < j)
            swap(A[i],A[j]);
        }
        return A;
    }
};