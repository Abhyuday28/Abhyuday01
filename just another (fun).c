#include<stdio.h>
#include<math.h>
float square(float);
int main()
{
float a,b;
printf("Enter the number");
scanf("%f",&a);
b=square(a);
printf("square of %f is %f\n",a,b);
return 0;
}
float square(float x)
{
    float y;
    y=pow(x,2);
    return (y);
}