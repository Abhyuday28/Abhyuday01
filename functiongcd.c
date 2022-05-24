#include<stdio.h>
#include<math.h>
int gcd(int,int);
int main()
{
    int x,y;
    printf("enter two numbers\n");
    scanf("%d %d",&x,&y);
    gcd(x,y);
    printf("gcd of %d and %d is %d",x,y,gcd(x,y));
}
int gcd(int a,int b)
{
 if(a==b)
 return(a);
 if(a==0||b==0)
 return(0);
 if(a%b==0)
 return(b);
 if(b%a==0)
 return(a);
 if(a>b)
 return(gcd(a%b,b));
 else
 return(gcd(a,b%a));
}