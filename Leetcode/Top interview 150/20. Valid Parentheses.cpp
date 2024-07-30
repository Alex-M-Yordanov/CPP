class Solution {
public:
    bool isValid(string s) {
        
        std::stack<char> stack;
        int len = s.length();
        for(char c: s)
        {
            if(c =='{' || c == '[' || c =='(')
            {
                stack.push(c);
            }
            else
            {
               if(stack.empty())
               {
                return false;
               }

               if((c==']' && stack.top()!='[') ||
                  (c=='}' && stack.top()!='{') ||
                  (c==')' && stack.top()!='(') )
               {
                return false;
               }

                stack.pop();
            }
            
        }
        return stack.empty();
    }
};
