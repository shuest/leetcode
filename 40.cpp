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
        // �м���  
        vector<int> path;  
        // ���ս��  
        vector<vector<int> > result;  
        int size = candidates.size();  
        if(size <= 0){  
            return result;  
        }//if  
        // ����  
        sort(candidates.begin(),candidates.end());  
        // �ݹ�  
        DFS(candidates,target,0,path,result);  
        return result;  
    }  
private:  
    void DFS(vector<int> &candidates, int target,int start,vector<int> &path,vector<vector<int> > &result){  
        int len = candidates.size();  
        // �ҵ�һ����Ϻ�Ϊtarget  
        if(target == 0){  
            result.push_back(path);  
            return;  
        }//if  
        for(int i = start;i < len;++i){  
            // ͬһ��β��ܳ�����ͬԪ��  
            if(i > start && candidates[i] == candidates[i-1]){  
                continue;  
            }//if  
            // ��֦  
            if(target < candidates[i]){  
                return;  
            }//if  
            path.push_back(candidates[i]);  
            DFS(candidates,target-candidates[i],i+1,path,result);  
            path.pop_back();  
        }//for  
    }  
};  