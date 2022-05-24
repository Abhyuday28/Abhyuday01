#include<math.h>
#include<stdio.h>
int area(int *,int *,int *,int *);
int distance (int *,int *,int *,int *,int *,int *,float *,float *,float *,float *);
int main()
{
  int o,p,q,r,s,t;
  float a;
  float length1,length2,length3;
  printf("Only for Right angle triangle\n");
  printf("enter the first coordinate\n");
  scanf("%d%d",&o,&p);
  printf("enter the second coordinate\n");
  scanf("%d%d",&q,&r);
  printf("enter the third coordinate\n");
  scanf("%d%d",&s,&t);
  distance(&o,&p,&q,&r,&s,&t,&length1,&length2,&length3,&a);
 
printf("vertices of triangle are %f %f %f\n",length1,length2,length3);
printf("area of triangle is %f",a);

   /*if(pow(length1,2)>=pow(length2,2)+pow(length3,2))
    length1=h;
    printf("pe = %f\n,be =%f\n,h=%f\n",pe,be,h);
    else
    {
    if(pow(length2,2)>=pow(length1,2)+pow(length3,2))
    length2=h;
    length1=pe;
    length3=be;
    printf("pe = %f\n,be =%f\n,h=%f\n",pe,be,h);
    else
    length3=h;
    length2=pe;
    length1=be;
    printf("pe = %f\n,be =%f\n,h=%f\n",pe,be,h);
    }
    if(length1>length2)
    {
        if(length1>length3)
        printf("h of triangle is %f",length1);
        else{
            if(length2>length1)
            {
                if(length2>length3)
                printf("h of triangle is %f",length2);
                else{
                    printf("h of triangle is %f",length3);
                }
            }
        }
    }*/
    

}
int distance (int *x,int *y,int *x1,int *y1,int *x2,int *y2,float *l1,float *l2,float *l3,float *ar)
{

    *l1=sqrt(pow(*x-*x1,2)+pow(*y-*y1,2));
    *l2=sqrt(pow(*x1-*x2,2)+pow(*y1-*y2,2));
    *l3=sqrt(pow(*x2-*x,2)+pow(*y2-*y,2));
  /* if (sqrt(pow(*l1,2)=pow(*l2,2)+pow(*l3,2))||(sqrt(pow(*l2,2)=pow(*l3,2)+pow(*l1,2))||(sqrt(pow(*l3,2)=pow(*l2,2)+pow(*l1,2)))
     printf("Its a Right angle triangle\n");
    else{
          printf("normal triangle\n");
        }
        */
    if (*l1>*l2+*l3||*l2>*l1+*l3||*l3>*l1+*l2)
       { /* code */printf("points makes triangle\n");
        *ar=*l1**l2*1/2;
       }
        else{
            printf("points are not makes triangle\n");
            
        }
        
    
    
    
}
