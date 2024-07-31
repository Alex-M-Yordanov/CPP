#include <iostream>

int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size-1;
    int mid;

    while(left<=right)
    {
        mid = left + (right - left)/2;
        if(arr[mid] == target)
        {
            return mid;
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

    return -1;
    //return left;     // if you want to return where the target should have been
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    int result = binarySearch(arr, size, target);

    if(result == -1)
    {
        std::cout<<"Element not found!"<<std::endl;
    }
    else
    {
        std::cout<<"Element found at index "<<result<<std::endl;
    }
    return 0;
}
