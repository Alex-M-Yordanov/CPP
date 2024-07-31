class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int len = numbers.size();
        int j = len-1;

        for(int i=0; i< len-1; ++i)
        {
           while(j>i && numbers[i]+numbers[j]>target)
           {
              --j;
           }

           if(numbers[i]+numbers[j] == target)
           {
            return {i+1,j+1};
           }
        }

        return {-1,-1};
    }
};
