#include <iostream>

const unsigned max_size{100};

void print(const int arr[][max_size], unsigned rows, unsigned columns)
{
    for (unsigned i{0}; i < rows; ++i)
    {
        for (unsigned j{0}; j < columns; ++j)
        {
            std::cout << arr[i][j] << ' ';
        }

        std::cout << '\n';
    }
}

void spiral(const int arr[][max_size], unsigned cap)
{
   for(int i=0;i<cap;--cap,++i)
   {
       for(int j=i; j<cap;++j)
        std::cout<<arr[i][j]<<" ";
       for(int j=i+1; j<cap;++j)
        std::cout<<arr[j][cap-1]<<" ";
       for(int j=cap-2; j>i;--j)
        std::cout<<arr[cap-1][j]<<" ";
        for(int j=cap-1; j>i;--j)
        std::cout<<arr[j][i]<<" ";
   }
}

int main()
{
    const int sp4[][max_size]{
        { 1,  2,  3,  4, 5},
        {16, 17, 18,  19, 6},
        {15, 24, 25,  26, 7},
        {14, 23,  22,  21, 8},
        {13, 12, 11, 10, 9}
    };

    spiral(sp4, 5);
    return 0;
}

