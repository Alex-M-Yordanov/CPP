//Moore's voting algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int majority;
      int cnt=0;
      for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                majority=nums[i];
                cnt++;
            }
            else if(nums[i]==majority)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }  
      return majority;
    }
};
