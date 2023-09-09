#include <iostream>
#include <string>
#include <cstring>

const size_t maxn =256;

void readstring(char* str)
{
    std::cin.getline(str,256);
}


int main()
{
    char str[maxn];
    readstring(str);
    std::cout<<std::endl;

    for(int i=0; i<strlen(str); ++i)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]-=('a'-'A');
      std::cout<<str[i];
    }
    return 0;

}
