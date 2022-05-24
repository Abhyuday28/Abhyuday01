#include<stdio.h>
int main()
{
    int i=3;
    printf("Address of i is %u\n",&i);
    printf("Value of i=%d\n",i);
    printf("value of  the i=%d\n",*(&i));
    return 0;
}