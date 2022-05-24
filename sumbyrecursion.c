#include<stdio.h>
int sum(int);
int main()
{
    int nn;
    printf("enter the number till you want the sum: \n");
    scanf("%d",&nn);
    printf("sum of 1st %d natural number is %d .\n",nn,sum(nn));
    return 0;
}
 int sum(int i)
 {
     if( i == 0 )
     return 0;
     else
     return i + sum(i-1);
 }