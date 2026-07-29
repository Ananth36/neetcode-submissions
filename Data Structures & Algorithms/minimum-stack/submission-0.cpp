class MinStack {
public:
    stack<int> stk;
    stack<int> dub;
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
    }
    
    void pop() {
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        dub = stk;
        int m = INT_MAX;
        while(!dub.empty()){
            m = min(m,dub.top());
            dub.pop();
        }
        
        return m;
    }
};
