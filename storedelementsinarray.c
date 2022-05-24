#include<stdio.h>
int main()
{   int elements[5],i;
     
    
    printf("5 Elements are: \n");
    for(i=0; i<5; i++)
    {
      scanf("%d", &elements[i]);
    }
      printf("elements of array are:\n");
      for(i=0; i<5; i++)
    printf("%d ",elements[i]);
    return 0;
}