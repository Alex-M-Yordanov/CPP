#include <limits>

const int MAX_INT = std::numeric_limits<int>::max();

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    
    int len = nums.size();
    int k;
    if(len==0)
    {
        k=0;
        return k;
    }
    int last_unique = nums[0];
    for(int i=1; i<len; ++i)
    {
        if(nums[i]==last_unique)
        {
           nums[i]=MAX_INT;  
        }
        else
        {
            last_unique=nums[i];
            k++;
        }
    }
    k=0;
    for (int i = 0; i < len; i++)
     {
        if (nums[i] != MAX_INT)
        {
            nums[k++]=nums[i];
        }
    }
    return k;
    }
};


// or a more elegant solution

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    
    int i=0;
    for(int j=1;j<nums.size();j++)
    {
         if(nums[i]!=nums[j])
         {
           nums[++i]=nums[j];
        }
    }
    return i+1;
    }
};
