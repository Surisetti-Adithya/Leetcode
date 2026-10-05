class MyStack {
public:
    queue<int> a;
    MyStack() {
    }
    
    void push(int x) {
        a.push(x);
        for (int i=0 ; i<a.size()-1 ; i++){
            int x = a.front();
            a.pop();
            a.push(x);
        }
    }
    
    int pop() {
        int x = a.front();
        a.pop();
        return x;
    }
    
    int top() {
        return a.front();
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */