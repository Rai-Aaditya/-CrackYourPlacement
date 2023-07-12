//raiaditya's pc
#include<bits/stdc++.h>
using namespace std;

class MyQueue {
    stack<int> input, output;
public:

    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop(void) {
        peek();
        int t=output.top();
        output.pop();
        return t;
    }
    
    int peek() {
        if(output.empty())
            while(!input.empty())
                output.push(input.top()), input.pop();
        return output.top();
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};
