class MinStack {
public:
    stack<int> st;
    MinStack() {
    }
    void push(int value) {
        st.push(value);
    }
    void pop() {
        st.pop();
    } 
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int> temp = st;
        int minEle = INT_MAX;
        while (!temp.empty()) {
            minEle = min(minEle, temp.top());
            temp.pop();
        }
        return minEle;
    }
};
