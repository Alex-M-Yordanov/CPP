#include <iostream>
const size_t m=256;
unsigned fib(unsigned n)
{
    if(n==0)
     return 0;

   if(n==1)
     return 1;

   return fib(n-2)+fib(n-1);
}
void rev(int* arr,unsigned cap )
{
    if(cap==0)
        return ;

     rev(arr+1,cap -1);
      std::cout << arr[0] << " ";
}

void print(int* arr,unsigned cap )
{
    if(cap==0)
        return ;
         std::cout << arr[0] << " ";
     print(arr+1,cap -1);
}

int sum (int num)
{
    if(num==0)
        return 0;
    return abs(num%10) + sum(num/10);
}

int bigg(int* arr,unsigned cap , int m )
{
    if(cap==0)
        return m;
    if(cap==1)
        return arr[0];

     if(m<*arr)
        m=*arr;

     return bigg(arr+1,cap -1,m);

}
int strlen(const char *word)
{
    if(*word =='\0')
        return 0;
    return 1+strlen(word+1);
}

bool ispal(char* word, int len)
{
    if(len<=1)
      return true;

    return (word[0]== word[len-1]) && ispal(word+1,len-2);
}

int main()
{

    unsigned n;
    std::cin>>n;
    std::cout<<fib(n);
    int num;
    std::cin>>num;
    std::cout<<sum(num);

    unsigned cap;
    std::cin>>cap;
    int arr[m];
    int b=arr[0];
    for(int i=0;i<cap;++i)
    {
        std::cin>>arr[i];
    }
    rev(arr,cap);
    std::cout<<std::endl;
    print(arr,cap);
    std::cout<<bigg(arr,cap,b);
   
    char word[m];
    int len;

    std::cin >> word;
    len = strlen(word);
    std::cout<<ispal(word,len)? "Yes" : "No";
 
    return 0;
}
