#include<math.h>
#include<stdio.h>
int main()
{
    int x,y,a,b;
    float dis;
    printf("enter the 1st coordinate\n");
    scanf("%d%d",&x,&y);
    printf("enter the 2nd coordinate\n");
    scanf("%d%d",&a,&b);
    dis=sqrt(pow(x-a,2)+pow(y-b,2));
    printf("%f unit distance\n",dis);
    return 0;
}