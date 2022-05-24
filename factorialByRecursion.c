#include<stdio.h>
int rec(int);
int main()
{
    int a,f;
    printf("enter the no you wants the factorial of:");
    scanf("%d",&a);
    f=rec(a);
    printf("factorial value:%d\n",f);
    return 0;
}
int rec(int x)
{
    int f;
    if (x==1)
    return (1);
    else
    f=x*rec(x-1);
    return (f);
}
