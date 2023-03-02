#include "stdio.h"
#define abc 123

int add_func(int x, int y)
{
    return (x + y);
}

int sub_func(int x, int y)
{
    return(x-y);
}

void main()
{
    printf("Hellow World! %d",add_func(10,24));
    printf("Hellow World! %d",sub_func(10,24));
}

