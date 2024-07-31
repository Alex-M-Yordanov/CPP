class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int j = t.size()-1;
        int i = s.size()-1;

        while(j>=0 && i>=0)
        {
            if(t[j] == s[i])
            {
                --i;
            }
            --j;
        }

        return i==-1;
    }
};
