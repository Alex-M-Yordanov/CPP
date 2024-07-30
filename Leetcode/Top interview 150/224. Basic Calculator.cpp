class Solution {
public:
    int calculate(string s) {
        
        std::stack<std::pair<int,int>> stack;
        int sum = 0;
        int sign = 1;
        int len = s.length();

        for(int i=0; i<len; ++i)
        {
            if(isdigit(s[i]))
            {
                int num = 0;
                while(i<len && isdigit(s[i]))
                {
                    num = num*10 + (s[i]-'0');
                    ++i;
                }
                i--;
                sum+= num*sign;
                sign = 1;
            }
            else if(s[i] == '(')
            {
                stack.push({sum,sign});
                sum=0;
                sign=1;
            }
            else if(s[i] == ')')
            {
                sum = stack.top().first + (stack.top().second * sum);
                stack.pop();
            }
            else if(s[i] == '-')
            {
                sign = sign*(-1);
            }
        }
        return sum;
    }
};
