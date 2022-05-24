#include<stdio.h>
int main()
{
    int n,i;
    float avg;
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
   float sum = 0;
   for( i=0;i<n;i++)
   {
       sum = sum+arr[i];
   }
  printf("\nsum of elements of array are: %.2f",sum);
    avg = sum/n;
   printf("\n The average of given array is: %f",avg);
   return 0;
}