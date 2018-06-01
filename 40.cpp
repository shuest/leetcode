#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cctype>
using namespace std;
class Solution {  
public:  
    vector<vector<int> > combinationSum2(vector<int> &candidates, int target) {  
        // 中间结果  
        vector<int> path;  
        // 最终结果  
        vector<vector<int> > result;  
        int size = candidates.size();  
        if(size <= 0){  
            return result;  
        }//if  
        // 排序  
        sort(candidates.begin(),candidates.end());  
        // 递归  
        DFS(candidates,target,0,path,result);  
        return result;  
    }  
private:  
    void DFS(vector<int> &candidates, int target,int start,vector<int> &path,vector<vector<int> > &result){  
        int len = candidates.size();  
        // 找到一组组合和为target  
        if(target == 0){  
            result.push_back(path);  
            return;  
        }//if  
        for(int i = start;i < len;++i){  
            // 同一层次不能出现相同元素  
            if(i > start && candidates[i] == candidates[i-1]){  
                continue;  
            }//if  
            // 剪枝  
            if(target < candidates[i]){  
                return;  
            }//if  
            path.push_back(candidates[i]);  
            DFS(candidates,target-candidates[i],i+1,path,result);  
            path.pop_back();  
        }//for  
    }  
};  