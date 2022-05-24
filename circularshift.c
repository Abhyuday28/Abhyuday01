#include<stdio.h>
#include<math.h>
int shift(int * ,int * ,int *);
int main()
{
int x=5,y=8,z=10;
printf("%d %d %d\n",x,y,z);
shift(&x,&y,&z);
printf("after circular shifting:%d %d %d\n",x,y,z);

}
int shift(int *x ,int *y ,int *z)
{
    int a;
    a=*z;
    *z=*y;
    *y=*x;
    *x=a;
}