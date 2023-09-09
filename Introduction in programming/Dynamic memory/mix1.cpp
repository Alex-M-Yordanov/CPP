#include <iostream>

void dealloc(int**& mat,unsigned n)
{
    for(int i=0; i<n; ++i)
        delete[] mat[i];
    delete[] mat;

    mat=nullptr;

}

int** alloc(unsigned n)
{
    int** arr= new (std::nothrow) int*[n];
    if(!arr)
    {
        std::cout<<"no mem";
        return nullptr;
    }

    for(int i=0; i<n; ++i)
    {
        arr[i]= new (std::nothrow) int[n];
        if(!arr[i])
        {
            std::cout<<"no mem";
            dealloc(arr,i);
            return nullptr;
        }
    }
    return arr;
}

void read(int** mat,unsigned n)
{
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            std::cin>>mat[i][j];
            if(!std::cin)
            {
                dealloc(mat, i);
                return ;
            }
        }
    }
}

void print(int** mat,unsigned n)
{
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            std::cout<<mat[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}

int** transp(int** mat,unsigned n)
{
    int** res=alloc(n);
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            res[i][j]=mat[j][i];
        }
    }
    dealloc(mat,n);
    mat=res;
    res=nullptr;
    return mat;
}
int countEven(int** mat, unsigned n)
{
    int cnt=0;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            if(mat[i][j]%2==0)
                cnt++;
        }
    }
    return cnt;
}

int* matEvenToArr(int** mat, unsigned n)
{
    int evens=countEven(mat,n);
    int* arr= new (std::nothrow) int[evens];
    if(!arr)
    {
        std::cout<<"no mem";
        return nullptr;
    }

    int index=0;
    for(int i=0; i<n ; ++i)
    {
        for(int j=0; j<n  ; ++j)
        {
            if(mat[i][j]%2==0)
                arr[index++]=mat[i][j];
        }
    }
    return arr;
}

void printarr(int* arr, int cap)
{
    for(int i=0; i<cap; ++i)
    {
        std::cout<<arr[i]<<" ";
    }
}

int  main()
{
    std::cout<<"Enter dimensions: ";
    unsigned n;
    std::cin>>n;
    if(!std::cin || n==0)
    {
        std::cerr<<"Bad input!";
        return 1;
    }

    int** mat = alloc(n);
    std::cout<<"Input: "<<std::endl;
    read(mat,n);
    std::cout<<"Print input: "<<std::endl;
    print(mat,n);

    mat=transp(mat,n);
    std::cout<<"Transposed: "<<std::endl;
    print(mat,n);

    int* arr=matEvenToArr(mat,n);
    int cap=countEven(mat,n);
    std::cout<<"All the even elements from the matrix: "<<std::endl;
    printarr(arr,cap);

    delete[] arr;
    dealloc(mat,n);
    return 0;
}
