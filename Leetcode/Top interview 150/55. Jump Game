class Solution {
public:
    bool canJump(vector<int>& nums) {
        
    int len = nums.size();
    int target = len-1;
    
    for(int i=len-2; i>=0;--i)
    {
      if(target<=i+nums[i])
      {
        target=i;
      }
    }
    if(target==0)
    {
        return true;
    }
    return false;
    }
};
