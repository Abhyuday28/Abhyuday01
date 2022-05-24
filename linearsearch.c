#include<stdio.h>
int main()
{int x,i,s;
printf("No of elements?:");
scanf("%d",&x);
//printf("%d elements are in array\n",x);
int arr[x];
printf("Put elements here:");
for(i=0;i<x;i++)
scanf("%d",&arr[x]);
printf("element you want to search:");
scanf("%d",&s);
for(i=0;i<x;i++)
{
    if(arr[x]==s){
        printf("%d element is at position %d ", s ,x);
        break;
    }
}return 0;
}