class MyQueue {
private:
    stack<int> iStack;
    stack<int> oStack;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        iStack.push(x);
    }
    
    int pop() {
        peek();
        int val=oStack.top();
        oStack.pop();
        return val;
    }
    
    int peek() {
        if(oStack.empty()){
            while(!iStack.empty()){
                oStack.push(iStack.top());
                iStack.pop();
            }
        }
        return oStack.top();
    }
    bool empty() {
        return iStack.empty() && oStack.empty();
    }
};
