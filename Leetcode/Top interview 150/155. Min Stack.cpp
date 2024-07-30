class MinStack {
private:
    std::stack<int> stack;
    std::stack<int> min;
public:
    MinStack()
    {
        min.push(INT_MAX);
    }
    
    void push(int val) 
    {
        if(val <= min.top())
        {
            min.push(val);
        }
        stack.push(val);
    }
    
    void pop()
    {
        if(stack.top() == min.top())
        {
            min.pop();
        }
        stack.pop();
    }
    
    int top() 
    {
        return stack.top();
    }
    
    int getMin() 
    {
        return min.top();
    }
};
