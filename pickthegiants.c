#include<stdio.h>
int main()
{
    int n=0, i=0, giant1=0, giant2=0, temp=0;
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
    printf("\n");
    giant1= arr[0];
    giant2= arr[1];
     if(giant1<giant2)
     {
         temp = giant1;
         giant1 = giant2;
         giant2 = giant1;
     }
     for(int i=2;i<n;i++)
     {
         if(arr[i] > giant1)
         {
             giant2 = giant1;
             giant1 = arr[i];
         }
         else if ( arr[i] > giant2 && arr[i] != giant1)
         {
             giant2 = arr[i];
         }
         printf(" Largest number is : %d\n",giant1);
         printf("2nd Largest number is : %d\n",giant2);

      return 0;
     }
}
