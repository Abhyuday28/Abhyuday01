#include<stdio.h>
int fac( int);
int main()
{
  int a,f;
  printf("Enter the no you need factorial of\n");
  scanf("%d",&a);
  f=fac(a);
  printf("Factorial value:%d\n",f);
  return 0;
}
int fac( int x)
{
    int factorial=1,i;
    for(i=x;i>0;i--)
    factorial=factorial*i;
    return(factorial);
    }                       