class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
    int i=0;
    bool flag = true;
    for(int j=1;j<nums.size();j++)
     {
         if(nums[i]!=nums[j])
         {
           flag=true;
           nums[++i]=nums[j];
         }
         else if(nums[i]==nums[j] && flag)
         {
           flag=false;
           nums[++i]=nums[j];
         }
     }
    return i+1;
    }
    
};
