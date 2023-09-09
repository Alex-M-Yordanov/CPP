#include <iostream>

void swapdig(int *number1, int *number2) {
    int tmp = *number1;
    *number1 = *number2;
    *number2 = tmp;
}

int* createArray(int sizearr)
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

int main() {

    int number1, number2;
    std::cin>>number1>>number2;
    swapdig(&number1, &number2);
    int sizearr;
    std::cout<<number1<<' '<<number2;
    
    std::cin>>sizearr;
    int* arr = createArray(sizearr);

    for(int i=0; i<sizearr; ++i)
    {
        std::cout<<arr[i]<<" ";
    }

    delete[] arr;
    return 0;
}
