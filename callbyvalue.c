#include<stdio.h>
int sum(int a ,int b)
{
    int c=a+b;
    return c;

}
int main()
{
     int var1=10;
     int var2=29;
     int var3=30;
     int var4=sum(var1,var2);
     printf("%d",var4);
}