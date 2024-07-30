class Solution {
public:
    string simplifyPath(string path) {

        std::stack<std::string> stack;
        std::string result;

        int len = path.length();
        for(int i=0; i<len;++i)
        {
            if(path[i]=='/')
            {
                continue;
            }

            std::string temp;
            while(i<len && path[i]!='/')
            {
                temp += path[i];
                ++i;
            }

            if(temp == ".")
            {
                continue;
            }
            else if(temp=="..")
            {
                if(!stack.empty())
                {
                  stack.pop();
                }
            }
            else
            {
                stack.push(temp);
            }
        }

        while(!stack.empty())
        {
            result = '/' + stack.top() + result;
            stack.pop();
        }

        if(result.length() == 0)
        {
            return "/";
        }

        return result;
    }
};
