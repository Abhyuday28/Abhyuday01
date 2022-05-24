#include<stdio.h>
void avgsumstd(int *,int *,int *,int *,int *,float *,int *,float *);
/*void sum(int*,int*,int*,int*,int*);
void stddev(int*,int*,int*,int*,int*);*/
int main()
{
    int x,y,z,a,b,su;
    float av,std;
    printf("Enter Five numbers\n");
    scanf("%d %d %d %d %d",&x,&y,&z,&a,&b);
   // printf("Numbers are:\n%d %d %d %d %d\n",x,y,z,a,b);
    
    avgsumstd(&x,&y,&z,&a,&b,&av,&su,&std);
    printf("Average=%f\n",av);
    printf("Sum=%d\n",su);
    return 0;
}
void avgsumstd(int *x,int *y,int *z,int *a,int *b,float *j,int *k ,float *st)
{
    int i;
    *k=*x+*y+*z+*a+*b;
    *j=*k/5.0;    
    

    
}