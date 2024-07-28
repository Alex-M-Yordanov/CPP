#include <iostream>

int linearSearch(int arr[], int size, int target)
{
   for(int i=0; i<size; ++i)
   {
    if(arr[i] == target)
    {
        return i;
    }
   }
   return -1;
}

int main()
{
    int arr[] = {2,4,9,3,6,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 6 ;
    int result = linearSearch(arr, size, target);

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
