class Solution {
public:
    int maxArea(vector<int>& height)
    {
       int i = 0;
       int j = height.size()-1;
       int volume = 0; 
       int curr;

       while(i<j)
       {
         curr = std::min(height[i],height[j])*(j-i);
         volume = std::max(volume,curr);

        if (height[i] < height[j]) 
        {
         ++i;
        }
        else
        {
         --j;
        }
       }
       return volume;
    }
};
