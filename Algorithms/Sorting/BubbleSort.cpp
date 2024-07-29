#include <iostream>
#include <vector>

void buublesort(std::vector<int>& arr)
{
   bool swapped;
   int len = arr.size();

   for(int i=0; i < len-1; ++i)
   {
    swapped = false;
    for(int j = 0; j < len-i-1; ++j)            // OPTIMIZATION1: len-i-1 instead of len-1 
    {
        if(arr[j] > arr[j+1])
        {
            std::swap(arr[j],arr[j+1]);
            swapped=true;
        }
    } 
    if(!swapped)                              //OPTIMIZATION2: early break
    {
        break;
    }
   }
}

int main()
{
    std::vector<int> array = {4,7,9,2,4,8,4,7,2,7,9,0};
    buublesort(array);
    for(int i: array)
    {
        std::cout<<i<<' ';
    }
    return 0;
}
