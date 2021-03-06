class MyQueue {
public:
    stack<int>s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int tmp;
        while(!(s1.empty()))
        {
            s2.push(s1.top());
            s1.pop();
        }
        tmp=s2.top();
        s2.pop();
        while(!(s2.empty()))
        {
            s1.push(s2.top());
            s2.pop();
        }
        return tmp;
    }
    
    int peek() {
        int tmp;
        while(!(s1.empty()))
        {
            s2.push(s1.top());
            s1.pop();
        }
        tmp=s2.top();
        while(!(s2.empty()))
        {
            s1.push(s2.top());
            s2.pop();
        }
        return tmp;
    }
    
    bool empty() {
        if(s1.empty())
            return true;
        return false;
    }
};