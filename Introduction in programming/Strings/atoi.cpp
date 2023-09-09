#include <iostream>
#include <cstring>
#include <cmath>

const int MAX_STR = 128;


void atoi(char* str)
{
    int cnt=0;
    int num = 0;
    int k=strlen(str);
    for(int i=0; i<k; i++)
    {
        if(str[i] >= '1' && str[i] <='9')
        {
            cnt++;
        }
    }

    for(int i=0; i<k; i++)
    {
        if(str[i] >= '1' && str[i] <='9')
        {
            cnt--;
            num+= pow (10,cnt) * ( str[i] - '0');
        }
    }
    std::cout<<num;
}


int main()
{
    char str[MAX_STR];
    std::cin.getline(str, MAX_STR);
    atoi(str);
}
