
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


// O(log(m*n))
class Solution {
public:
   bool searchMatrix(const std::vector<std::vector<int>>& matrix, int target) 
   {
    if (matrix.empty() || matrix[0].empty())
    {
        return false;
    }

    int m = matrix.size();       
    int n = matrix[0].size();    

    int left = 0;
    int right = m * n - 1;

    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        int midValue = matrix[mid / n][mid % n];

        if (midValue == target)
        {
            return true;
        }
        else if (midValue < target)
        {
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }
    }

    return false;
   }
};


