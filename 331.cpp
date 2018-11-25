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
    void DFS(vector<string>& str, int& index, int& flag)
    {
        if(str[index++]=="#") return;
        if(index+1 >= str.size()) {flag = 0; return;}
        DFS(str, index, flag);
        DFS(str, index, flag);
    }
    bool isValidSerialization(string preorder) {
        if(preorder.size()==0) return false;
        preorder += ",";
        vector<string> vec;
        int index = 0, i =0, flag=1;
        while(i < preorder.size())
        {
            int pos = preorder.find(',', i);//从第i个位置查找','
            vec.push_back(preorder.substr(i, pos-i));
            i = pos+1;
        }
        DFS(vec, index, flag);
        return flag==0?false:index==vec.size();
    }
};