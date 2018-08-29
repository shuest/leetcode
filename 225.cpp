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
using namespace std;

//��queueʵ��stack

class MyStack {
public:
    /** Initialize your data structure here. */
	queue<int> q1,q2;

    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
		q1.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
		while(q1.size()!=1)
		{
			int t=q1.front();
			q1.pop();
			q2.push(t);
		}
		int res=q1.front();
		q1.pop();
		while(!q2.empty())
		{
			int temp=q2.front();
			q2.pop();
			q1.push(temp);
		}
		return res;
    }
    
    /** Get the top element. */
    int top() {
		return q1.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
		return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */