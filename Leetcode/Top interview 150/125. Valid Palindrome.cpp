class Solution {
public:
    bool isPalindrome(string arr)
     {
        int left=0;
        int right=arr.length()-1;

        while(left<=right)
        {
            while (left < right && !std::isalnum(arr[left])) 
            {
                ++left;
            }
            while (left < right && !std::isalnum(arr[right]))
            {
                --right;
            }
            if(std::tolower(arr[left]) != std::tolower(arr[right]))
            {
                return false;
            }
            ++left;
            --right;
        }

        return true;
    }
};
