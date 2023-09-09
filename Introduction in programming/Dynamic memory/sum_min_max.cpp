#include <iostream>

int* alloc(int sizearr)
{
    int* arr= new (std::nothrow) int[sizearr];
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

void f(int* arr,int sizearr)
{
    int sum=0;
    int minim=arr[0];
    int maxim=arr[0];
    for(int i=0; i<sizearr; ++i)
    {
        sum+=arr[i];
        if(arr[i]<minim)
            minim=arr[i];
        if(arr[i]>maxim)
            maxim=arr[i];
    }
    std::cout<<sum<<" "<<minim<<" "<<maxim;
}

int main()
{
    int sizearr;
    std::cin>>sizearr;

    int* arr=alloc(sizearr);
    f(arr,sizearr);

    delete[] arr;
    return 0;
}
