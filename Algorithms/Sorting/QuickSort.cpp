#include <iostream>
#include <vector>
#include <ctime>

int partition(std::vector<int>& arr, int low, int high)
{
    int pivot_index = low + (std::rand() % (high - low + 1));  // random index in low ... high
    
    if(pivot_index != high)
    {
      std::swap(arr[pivot_index], arr[high]);
    }
    int pivot_value = arr[high];
    int i = low;
    for(int j = low; j < high; ++j)
    {
        if(arr[j] <= pivot_value)
        {
            std::swap(arr[i], arr[j]);
            i++;
        }
    }

    std::swap(arr[i],arr[high]);

    return i;
}

void quicksort_recursion(std::vector<int>& arr, int low, int high)
{

    if(low < high)
    {
      int pivot_index = partition(arr,low,high);

      quicksort_recursion(arr,low,pivot_index - 1);
      quicksort_recursion(arr,pivot_index + 1,high);
    }
}

void quicksort(std::vector<int>& arr)
{
    std::srand(time(NULL));
    quicksort_recursion(arr,0,arr.size()-1);
}

int main()
{
    std::vector<int> array = {4,7,9,2,4,8,4,7,2,7,9,0};

    quicksort(array);
    for(int i:array)
    {
        std::cout<<i<<' ';
    }
    
    return 0;
}
