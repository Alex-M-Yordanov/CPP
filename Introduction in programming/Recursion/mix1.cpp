#include <iostream>
size_t const maxn=128;


unsigned fact(unsigned a)
{
   if(a==0)
        return 1;
   return a*fact(a-1);

}

unsigned strlen(const char* str)
{
    if(*str == '\0')
        return 0;
    return 1+strlen(str+1);
}

void strcpy( char* str, char* dest)
{
    if(*str == '\0')
    {
        *dest='\0';
        return ;
    }
    *dest=*str;
    return strcpy(str+1,dest+1);
}

unsigned sumdigits(unsigned num)
{
    if(num==0)
        return 0;

    return num%10 + sumdigits(num/10);
}
int main()
{
    unsigned a;
    std::cin>>a;
    std::cout<<fact(a);
    std::cout<<std::endl;
    char str[]={'s','o','s','o','s','o','s','o','\0'};
    std::cout<<strlen(str);
     std::cout<<std::endl;
    char dest[8]={0};
     strcpy(str,dest);
     for(int i=0;i<=strlen(dest);++i)
     {
         std::cout<<dest[i]<<" ";
     }

     unsigned num;
     std::cin>>num;
     std::cout<<sumdigits(num);
    return 0;
}
