#include <iostream>

int* alloc(int sizearr)
{
    int* arr =new (std::nothrow) int[sizearr];
    if(!arr)
    {
        return nullptr;
    }

    for(int i=0; i<sizearr; ++i)
    {
        std::cin>>arr[i];
    }
    return arr;
}

int main()
{
    int sizearr;
    std::cin>>sizearr;

    int* a=alloc(sizearr);
    int curr=a[0];

    int temp;
    //BUBBLE SORT
    for(int i=0; i<sizearr-1; ++i)
    {
         for(int j=0; j<sizearr-i-1; j++)
            {
                if(a[j]>a[j+1])
                 {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                 }
            }

    }
     for(int j=0;j<sizearr; ++j)
        {
         std::cout<<a[j]<<" ";
        }

    delete[] a;
    return 0;
}
