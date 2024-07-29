class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

    int k = 0;
    int len = nums.size();
    int i=0;
    for(i=0;i<len;++i)
    {
        if(nums[i]==val)
        {
            nums[i]=-1;
        }
        else
        {
            k++;
            if(i>0 && nums[i-1]==-1 )
            {
                nums[i-1]=nums[i];
                nums[i]=-1;
            }
        }
    }
    
    k = 0;
    i = 0;
    for (i = 0; i < len; i++)
     {
        if (nums[i] != -1)
        {
            nums[k++] = nums[i];
        }
    }
      return k;
    }
  
};
