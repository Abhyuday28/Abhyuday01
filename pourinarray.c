#include<stdio.h>
int main()
{
     int n, i, pour, pos, x;
    printf("Enter no of element in array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array:\n");
    for( i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("elements in array are:\n");
   for( i=0;i<n;i++)
   {
      printf(" %d ",arr[i]);
   }
   printf("\n enter the number to insert in array: \n");
   scanf("%d", &pour);
    printf("enter position in array: \n");
    scanf("%d", &pos);
    n++;
    for(i=n-1; i>=pos; i--)
        arr[i] = arr[i-1];  
    
     arr[pos - 1] = pour;
     for( i = 0; i < n; i++)
     printf("%d ", arr[i]);
     return 0;
}



