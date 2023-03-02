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

int display(char *ptr)
{
    printf("%s¥n");
}

bool compare(int x, int y)
{
    if(x==y){
        return true;
    } else {
        return false;
    }
}

void main()
{
    printf("Hellow World! %d",add_func(10,24));
    printf("Hellow World! %d",sub_func(10,24));
    display("This is stings.");
    printf("result=%d¥n",compare(120, 120));
}
