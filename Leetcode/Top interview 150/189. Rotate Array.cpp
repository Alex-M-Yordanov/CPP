class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    
    int len=nums.size();
    if(k>len)
    {
        k %= len;
    }
    for(int i=0; i<len-k;++i)
    {
      nums.push_back(nums[i]);
    }
    nums.erase(nums.begin(), nums.begin() + len-k);
    }
};
