class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        std::stack<std::string> stack;
        int a,b;

        for(std::string x: tokens)
        {
            if(x == "+" || x == "-" || x == "*" || x == "/") 
            {
                b = std::stoi(stack.top());
                stack.pop();
                a = std::stoi(stack.top());
                stack.pop();
                if(x=="+")
                {
                    stack.push(std::to_string(a+b));
                }
                else if(x=="-")
                {
                    stack.push(std::to_string(a-b));
                }
                else if(x=="*")
                {
                    stack.push(std::to_string(a*b));
                }
                else if(x=="/")
                {
                    stack.push(std::to_string(a/b));
                }
            }
            else
            {
                stack.push(x);
            }

        }
        return std::stoi(stack.top());
    }
};
