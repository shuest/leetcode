
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
using namespace std;

class MyQueue {
public:
    /** Initialize your data structure here. */
	stack<int> s1,s2;
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
		s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
		while(s1.size()!=1)
		{
			int t = s1.top();
			s1.pop();
			s2.push(t);
		}
		int res=s1.top();
		s1.pop();
		while(!s2.empty())
		{
			int t = s2.top();
			s2.pop();
			s1.push(t);
		}
		return res;
    }
    
    /** Get the front element. */
    int peek() {
		while(s1.size()!=1) {
			int t = s1.top();
			s1.pop();
			s2.push(t);
		}
		int res=s1.top();
		s1.pop();
		s2.push(res);
		while(!s2.empty()) {
			int t = s2.top();
			s2.pop();
			s1.push(t);
		}
		return res;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
		if(s1.empty())
			return true;
		else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */