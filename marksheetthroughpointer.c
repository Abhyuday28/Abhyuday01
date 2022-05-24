#include<stdio.h>
void marksheet(float *,float *,float *,float *,float *,float *);
int main()
    {
        float a,b,c,total,avg,per;
        printf("Enter the marks(in 100)\n");
        scanf("%f%f%f",&a,&b,&c);
        printf("marks are:\n %f %f %f\n",a,b,c);
        marksheet(&a,&b,&c,&total,&avg,&per);
        printf("Total marks:%f\n",total);
        printf("Average of marks:%f\n",avg);
        printf("Percentage:%fpercent\n",per);
    }
    void marksheet(float *a,float *b,float *c,float *total,float *avg,float *per)
    {
      *total=*a+*b+*c;
      *avg=*total/3;
      *per=*total/300*100;
    }
