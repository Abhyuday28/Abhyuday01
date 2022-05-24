#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* ptr;
    int n, i;
	 printf("element in array: \n");
	 scanf("%d", &n);
	 printf("%d elements in array \n", n);
	 ptr = (int*)malloc(n * sizeof(int));
	 if (ptr = NULL)
	{
	printf("memory not allocated. \n");
	exit (0);
	 }	
	  else
	  {
	  	printf("memory allocated using malloc. \n");
      
	  	for(i = 0; i < n; ++i)
          { 
              ptr[i] = i+1;	
          }	  
		printf("element of the array are :\n");
		for(i = 0; i < n; ++i)
        {
          printf("%d, ", ptr[i]);	
        }
      }
		
		
	  return 0;
}