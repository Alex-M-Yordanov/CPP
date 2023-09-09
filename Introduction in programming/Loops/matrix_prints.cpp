#include <iostream>
size_t const MAXN=10;


void readmat(int mat[][MAXN],int sizea)
{
    for(int i=0;i<sizea; ++i)
    {
       for(int j=0;j<sizea; ++j)
      {
          std::cin>>mat[i][j];
      }
    }
}

void printmat(int mat[][MAXN],int sizea)
{
    for(int i=0;i<sizea; ++i)
    {
       for(int j=0;j<sizea; ++j)
      {
          std::cout<<mat[i][j]<<" ";
      }
      std::cout<<std::endl;
    }
}

void secondd(int mat[][MAXN],int sizea)
{
    for(int i=0;i<sizea; ++i)
    {
       for(int j=0;j<sizea; ++j)
      {
          if(i+j==sizea-1)
          std::cout<<mat[i][j]<<" ";
      }
    }
}

void maind(int mat[][MAXN],int sizea)
{
    for(int i=0;i<sizea; ++i)
    {
       for(int j=0;j<sizea; ++j)
      {
          if(i==j)
             std::cout<<mat[i][j]<<" ";
      }

    }
}
void underd(int mat[][MAXN],int sizea)
{
    for(int i=0;i<sizea; ++i)
    {
       for(int j=0;j<sizea; ++j)
      {
          if(i>j)
             std::cout<<mat[i][j]<<" ";
      }

    }
}

void aboved(int mat[][MAXN],int sizea)
{
    for(int i=0;i<sizea; ++i)
    {
       for(int j=0;j<sizea; ++j)
      {
          if(i<j)
             std::cout<<mat[i][j]<<" ";
      }

    }
}

void undersd(int mat[][MAXN],int sizea)
{
    for(int i=0;i<sizea; ++i)
    {
       for(int j=0;j<sizea; ++j)
      {
          if(i+j>sizea-1)
             std::cout<<mat[i][j]<<" ";
      }

    }
}

void abovesd(int mat[][MAXN],int sizea)
{
    for(int i=0;i<sizea; ++i)
    {
       for(int j=0;j<sizea; ++j)
      {
          if(i+j<sizea-1)
             std::cout<<mat[i][j]<<" ";
      }

    }
}

void colpathdown(int mat[][MAXN],int sizea)
{
    for(int j=0;j<sizea; ++j)
    {
       for(int i=0;i<sizea; ++i)
      {
          if(j%2!=0)
             std::cout<<mat[sizea -i -1][j]<<" ";
          else
             std::cout<<mat[i][j]<<" ";
      }

    }
}


int main()
{
    int sizea;
    std::cin>>sizea;
    int mat[MAXN][MAXN];
    readmat(mat,sizea);
    std::cout<<std::endl;
    printmat(mat,sizea);
    std::cout<<std::endl;
    maind(mat,sizea);
    std::cout<<std::endl;
    secondd(mat,sizea);
    std::cout<<std::endl;
    underd(mat,sizea);
    std::cout<<std::endl;
    aboved(mat,sizea);
    std::cout<<std::endl;
    undersd(mat,sizea);
    std::cout<<std::endl;
    abovesd(mat,sizea);
    std::cout<<std::endl;
    colpathdown(mat,sizea);
    std::cout<<std::endl;

    return 0;
}
// 1 2 3 4 5 6 7 8 9
