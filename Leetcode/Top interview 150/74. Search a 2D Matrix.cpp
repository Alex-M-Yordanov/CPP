
// O(m*log n)
class Solution {
public:
    bool binarySearch(vector<int>& arr, int target)
    { 
        int left = 0;
        int right = arr.size()-1;
        int mid;

        while(left <= right)
        {
            mid = left + (right - left)/2;
            if(arr[mid] == target)
            {
                return true;
            }

            if(arr[mid] < target)
            {
                left= mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        
        return false;
    }


    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        bool found;
        for(std::vector<int> row: matrix)
        {
          found = binarySearch(row,target);
          if(found)
          {
            return true;
          }
        }

        return false;
    }
};




