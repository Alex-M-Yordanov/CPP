#include <iostream>
size_t const maxn=128;

unsigned Power(unsigned num, unsigned power)
{
    if(power<1)
        return 1;
  return num*Power(num,power-1);
}

unsigned prod(unsigned c, unsigned b)
{
     if(b==0)
        return 0;
     return c + prod(c,b-1);
}
unsigned countdigits(unsigned num)
{
    if(num==0)
        return 0;
    return 1+countdigits(num/10);
}
unsigned rev(unsigned num)
{
    if(num==0)
        return 0;
     int digits=countdigits(num);
    return (num%10)*Power(10,digits-1) + rev(num/10);
}

int main()
{
    
    unsigned num;
    std::cin>>num;
    unsigned power;
    std::cin>>power;
    std::cout<<Power(num,power);
    
    std::cout<<std::endl;
    unsigned c,b;
    std::cin>>c>>b;
    std::cout<<prod(c,b);
   
    std::cout<<std::endl;
    unsigned d;
    std::cin>>d;
    std::cout<<rev(d);
}
